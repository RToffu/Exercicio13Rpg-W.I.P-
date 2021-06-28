#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED

#include<stdlib.h>
#include<time.h>





class Personagem{
public:

    void setTipo(int tp);
    void setPv(int x);
    void setPm(int x);
    void setFf(int x);
    void setFm(int x);
    void setArm(int x);
    void setMr(int x);
    void setAgi(int x);
    void setDano(int x, int y);
    int getPv();
    int getPm();
    void recDano(int x);
    int getDano();
private:
    int tipo;
    int pv; //pontos de vida
    int pm; //pontos de mana
    int ff; //forca fisica
    int fm; //forca magica
    int arm;//armadura
    int mr; //resistencia magica
    int agi;//agilidade
    int dano;
};
void Personagem::setTipo(int tp) {
    tipo=tp;
}
void Personagem::setPv(int x){
    pv=x;
}
void Personagem::setPm(int x){
    pm=x;
}
void Personagem::setFf(int x) {
    ff=x;
}
void Personagem::setFm(int x){
    fm=x;
}
void Personagem::setArm(int x) {
    arm=x;
}
void Personagem::setMr(int x) {
    mr=x;
}
void Personagem::setAgi(int x) {
    agi=x;
}
void Personagem::setDano(int x, int y){
    srand(time(NULL));
    dano=x+rand()%y;
}

int Personagem::getPv(){
    return pv;
}
int Personagem::getPm(){
    return pm;
}
int Personagem::getDano(){
    return dano;
}
void Personagem::recDano(int dmg){
 double aux=0;
 aux=dmg*(arm/100);
 dmg=dmg-aux;
 pv=pv-dmg;
}

class Guerreiro:public Personagem{

public:
    Guerreiro();

};
Guerreiro::Guerreiro(){
    setTipo(1);
    setPv(4000);
    setPm(30);
    setFf(100);
    setFm(20);
    setArm(80);
    setMr(20);
    setAgi(20);
    setDano(180,200);

}

class Ladrao:public Personagem{

public:
    Ladrao();
};
Ladrao::Ladrao(){
    setTipo(2);
    setPv(2800);
    setPm(50);
    setFf(50);
    setFm(30);
    setArm(40);
    setMr(50);
    setAgi(80);
    setDano(220,200);
}

class Mago:public Personagem{

public:
    Mago();
};
Mago::Mago(){
    setTipo(3);
    setPv(2500);
    setPm(100);
    setFf(40);
    setFm(100);
    setArm(30);
    setMr(80);
    setAgi(40);
    setDano(50,150);
}

class Paladino:public Personagem{

public:
    Paladino();
};
Paladino::Paladino(){
    setTipo(4);
    setPv(3200);
    setPm(80);
    setFf(60);
    setFm(50);
    setArm(60);
    setMr(60);
    setAgi(60);
    setDano(220,200);
}

class Animal:public Personagem{

public:
    Animal();
};
Animal::Animal(){
    setTipo(5);
    setPv(3200);
    setPm(30);
    setFf(80);
    setFm(20);
    setArm(80);
    setMr(20);
    setAgi(50);
    setDano(100,200);
}

class Troll:public Personagem{

public:
    Troll();
};
Troll::Troll(){
    setTipo(6);
    setPv(2800);
    setPm(20);
    setFf(100);
    setFm(20);
    setArm(80);
    setMr(20);
    setAgi(20);
    setDano(180,200);
}

class Dragao:public Personagem{

public:
    Dragao();
};
Dragao::Dragao(){
    setTipo(7);
    setPv(3000);
    setPm(40);
    setFf(100);
    setFm(20);
    setArm(50);
    setMr(50);
    setAgi(30);
    setDano(100,200);
}

class Zumbi:public Personagem{

public:
    Zumbi();
};
Zumbi::Zumbi(){
    setTipo(8);
    setPv(2500);
    setPm(20);
    setFf(40);
    setFm(20);
    setArm(40);
    setMr(80);
    setAgi(50);
    setDano(100,200);
}






#endif // CLASSES_H_INCLUDED
