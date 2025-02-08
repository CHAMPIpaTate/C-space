#include "SDlib.h"
#include "../mcc_generated_files/system/system.h"
#include "diskio.h"
#include "pff.h"
#include <string.h>



#define TailleTampon 31
volatile uint8_t tampon[TailleTampon];



/*regroupe toutes les fonction neccesaire pour init la carte SD */
void initSDcard(char Path[]){
init();         //init la carte sd
vaittime();
mount();        //mount la carte sd
vaittime();
fileOpen(Path); //ouvre le fichier text
vaittime();
}

/*fait clignotter la led rouge en fonction de la fonction qui génère l'erreur:
 init:          1 clignottement
 mount:         2 clignottement
 dirOpen:       3 clignottement
 fileOpen:      4 clignottement
 fileWrite      5 clignottement
 
 si l'écriture s'est bien effecturé la led Verte clignotte en vert rapidement 
 
 */
void ErrFunct(int Error) {
    int k = 0;

    if (Error == 0) {
        k = 0;
        for (k = 0; k < 10; k++) {
            Ok_Toggle();
            __delay_ms(50);
        }

    } else {
        k = 0;
        for (k = 0; k < (Error * 2); k++) {
            Err_Toggle();
            __delay_ms(300);
        }
    }
    Ok_SetLow();
    Err_SetLow();
 }

/*permet d'attendre un peu entre les fonction de fatfs pour ne pas surcharger le bus spi*/
void vaittime(void) {
    __delay_ms(10); //pov tu t'attendais a quoi
}

void init(void) {
    FRESULT res;                        //variables propres a fatfs
    res = disk_initialize(); //fonction de fatfs d'initialisation
    if (res != FR_OK) { // appel de la fonction d'erreur
        ErrFunct(1);
        Ok_SetHigh();
    }
}

void mount(void) {
    FATFS fatfs;                         //variables propres a fatfs
    FRESULT res;
    res = pf_mount(&fatfs);              //fonction de mount de fatfs
    if (res != FR_OK) {                  // appel de la fonction d'erreur
        ErrFunct(2);

    }
}

/*est censé ouvrir un dossier. ne marche pas mais ne gène pas a l'écriture tant que Path est un chemin général*/
void dirOpen(void) {
    FRESULT res;                        //variables propres a fatfs
    DIR* dir;
    res = pf_opendir(&dir, "/DATA");    //fonction d'ouverture dossier de fatfs
    if (res != FR_OK) {                 // appel de la fonction d'erreur
        ErrFunct(3);
        Ok_SetHigh();
    }

}

/*ouvre le fichier text de chemin path.
 faire attention a la façon d'écrire Path, le petit fatfs est capricieux*/
void fileOpen(char Path[]) {
    FRESULT res;                        //variables de fatfs
    res = pf_open(Path);                //fonction d'ouverture de fichier de fatfs
    if (res != FR_OK) {                 // appel de la fonction d'erreur
        ErrFunct(4);
    }
}

void fileWrite(char Message[]) {
    FRESULT res;
    volatile UINT nb_wr;                //variables de fatfs
    
    static uint32_t ofs;                //pointeur vers la fin du fichier
    
    pf_lseek(ofs);                      //permet de se mette a la suite du fichier
    res = pf_write(Message, strlen(Message), &nb_wr);//fonction de fatfs d'écriture dans un dossier text
    pf_write(0, 0, &nb_wr);             //signe la fin d'écriture du fichier
    if (res != FR_OK) {                 // appel de la fonction d'erreur
        ErrFunct(5);
    } else {
        ofs += 512;                     //met a jours le pointeur de fin de fichier
        ErrFunct(0);                    //fait clignotté la led verte pour indiquer la fin d'écriture du fichier text

    }
    vaittime();
}

/*Transforme une variable uint16_t en une chaine de caractère ascii stocker dans une liste
 la fonction permet aussi de rajouter du text apres le nombre.
  
 * les données son enregistrer a l'envers: les dernier caractères a écrire sont insèrer en premier dans tampon
 */
void convert(int nb,char Unit[]) {
    uint8_t k;                          //variable pour mes boucles for
    for (k=0;k<TailleTampon;k++){       //vide la liste tampon
        tampon[k]='0';
    }
    tampon[0]='\0';                     //indique la fin des donnée a écrire(sera décaler dans la liste au furs et a mesures de l'insertion des données)
    for (k=strlen(Unit);k>0;k--){       
        decalListD();                   //décale les elements de tampon de 1 vers la droite (>>1)
        tampon[0]=Unit[k];              //insert le texte qui seras apres le nombre (ne pas oublier que le text est inserer a l'envers dans tampon)
    }
    for (k = 0; k < 5; k++) {
        decalListD();                   //décale les elements de tampon de 1 vers la droite (>>1)
        tampon[0] = (nb % 10) + 48;     //récupère les unitée de la variable et les renregistre en équivalent ascii
        nb = (nb - (nb % 10)) / 10;     //soustrait les uniter avans de diviser par 10
    }
    ordoneList();                       //supprime les 0 inutiles 
    fileWrite(tampon);
}


/*permet de décaler le contenue de la liste tampon de 1 vers la droite */
void decalListD() {
    uint8_t k = 0;
    for (k = TailleTampon; k > 0; k--) {
        tampon[k] = tampon[k - 1];
    }

}

/*permet de décaler le contenue de la liste tampon de 1 vers la gauche */
void decalListG() {
    uint8_t k = 0;
    uint8_t mem = 0;

    for (k = 0; k <TailleTampon; k++) {
        tampon[k] = tampon[k + 1];
    }
}

/*supprime tout les 0 qui s'ajoute quant la variable est inferieure à 0x8000*/
void ordoneList() {
    while (tampon[0] == '0') {
        decalListG();
    }
}
