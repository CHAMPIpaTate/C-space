#ifndef SDLIB_H
#define	SDLIB_H


    
void ErrFunct(int Error);
void init(void);
void mount(void);
void dirOpen(void);
void fileOpen(char Path[]);
void fileWrite(char Message[]);
void vaittime(void);
void convert(int nb,char Unit[]);
void decalListD();
void decalListG();
void ordoneList();
void initSDcard();


#endif /* ifndef SDLIB_H */