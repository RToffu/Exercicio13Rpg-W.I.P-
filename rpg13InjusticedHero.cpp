#include <iostream>
#include <cstdio>
#include "classes.h"


using namespace std;


int main()
{
    int x=1, dmg, vid1=0, vid2=0;
    Guerreiro *gue=new Guerreiro();
    Ladrao *lad=new Ladrao();
    Mago *mago=new Mago();
    Paladino *pala=new Paladino();
    //
    Animal *anim=new Animal();
    Troll *tro=new Troll();
    Dragao *drag=new Dragao();
    Zumbi *zum=new Zumbi();

    do{
        vid1=0;
        vid2=0;
    system("cls");
    cout << "###TIME-1###" << endl;
    cout << "GUERREIRO |-| Pontos de Vida: " << gue->getPv() << " |-| Pontos de Mana: " << gue->getPm()  <<endl;
    cout << "LADRAO    |-| Pontos de Vida: " << lad->getPv() << " |-| Pontos de Mana: " << lad->getPm()  <<endl;
    cout << "MAGO      |-| Pontos de Vida: " << mago->getPv() <<" |-| Pontos de Mana: " << mago->getPm() <<endl;
    cout << "PALADINO  |-| Pontos de Vida: " << pala->getPv() <<" |-| Pontos de Mana: " << pala->getPm() <<endl;
    cout << "======================"  << endl;
    cout << "###TIME-2###" << endl;
    cout << "ANIMAL    |-| Pontos de Vida: " << anim->getPv() <<" |-| Pontos de Mana: " << anim->getPm() <<endl;
    cout << "TROLL     |-| Pontos de Vida: " << tro->getPv() <<" |-| Pontos de Mana: " << tro->getPm() <<endl;
    cout << "DRAGAO    |-| Pontos de Vida: " << drag->getPv() <<" |-| Pontos de Mana: " << drag->getPm() <<endl;
    cout << "ZUMBI     |-| Pontos de Vida: " << zum->getPv() <<" |-| Pontos de Mana: " << zum->getPm() <<endl;

    fflush(stdin);
    cout << "Pressione ENTER para continuar......." << endl;
    getchar();

    system("cls");
    do{
    cout << "TURNO TIME-1" << endl;
    cout << "============" << endl;
    cout << "Escolha quem vai atacar: "<< endl;
    cout << "1-GUERREIRO" << endl;
    cout << "2-LADRAO" << endl;
    cout << "3-MAGO" << endl;
    cout << "4-PALADINO" << endl;
    cout << "Escolha a opcao: " << endl;
    cin >> x;
    if(x!=1 && x!=2 && x!=3 && x!=4)
        cout << "Valor invalido" << endl;
    }while(x!=1 && x!=2 && x!=3 && x!=4);
    switch(x){
    case 1:
        dmg=gue->getDano();
        //dmg=5000;
        if(gue->getPv()<=0){
            cout << "GUERREIRO   esta morto e n pode atacar" << endl;
            dmg=0;
        }

        break;
    case 2:
        dmg=lad->getDano();
        if(lad->getPv()<=0){
            cout << "LADRAO esta morto e n pode atacar" << endl;
            dmg=0;
        }
        break;
    case 3:
        dmg=mago->getDano();
        if(mago->getPv()<=0){
            cout << "MAGO esta morto e n pode atacar" << endl;
            dmg=0;
        }
        break;
    case 4:
        dmg=pala->getDano();
        if(pala->getPv()<=0){
            cout << "PALADINO esta morto e n pode atacar" << endl;
            dmg=0;
        }
        break;
    }



    do{
    cout << "============" << endl;
    cout << "Escolha o alvo: " << endl;
    cout << "1-ANIMAL " << endl;
    cout << "2-TROLL " << endl;
    cout << "3-DRAGAO " << endl;
    cout << "4-ZUMBI " << endl;
    cout << "Escolha a opcao: " << endl;
    cin >> x;
    if(x!=1 && x!=2 && x!=3 && x!=4)
        cout << "Valor invalido" << endl;
    }while(x!=1 && x!=2 && x!=3 && x!=4);
    switch(x){
     case 1:
        anim->recDano(dmg);
        if(anim->getPv()<0)
            anim->setPv(0);
        break;
    case 2:
        tro->recDano(dmg);
        if(tro->getPv()<0)
            tro->setPv(0);
        break;
    case 3:
        drag->recDano(dmg);
        if(drag->getPv()<0)
            drag->setPv(0);
        break;
    case 4:
        zum->recDano(dmg);
        if(zum->getPv()<0)
            zum->setPv(0);
        break;
    }
//==================================time 2
    system("cls");
    cout << "###TIME-1###" << endl;
    cout << "GUERREIRO |-| Pontos de Vida: " << gue->getPv() << " |-| Pontos de Mana: " << gue->getPm()  <<endl;
    cout << "LADRAO    |-| Pontos de Vida: " << lad->getPv() << " |-| Pontos de Mana: " << lad->getPm()  <<endl;
    cout << "MAGO      |-| Pontos de Vida: " << mago->getPv() <<" |-| Pontos de Mana: " << mago->getPm() <<endl;
    cout << "PALADINO  |-| Pontos de Vida: " << pala->getPv() <<" |-| Pontos de Mana: " << pala->getPm() <<endl;
    cout << "======================"  << endl;
    cout << "###TIME-2###" << endl;
    cout << "ANIMAL    |-| Pontos de Vida: " << anim->getPv() <<" |-| Pontos de Mana: " << anim->getPm() <<endl;
    cout << "TROLL     |-| Pontos de Vida: " << tro->getPv() <<" |-| Pontos de Mana: " << tro->getPm() <<endl;
    cout << "DRAGAO    |-| Pontos de Vida: " << drag->getPv() <<" |-| Pontos de Mana: " << drag->getPm() <<endl;
    cout << "ZUMBI     |-| Pontos de Vida: " << zum->getPv() <<" |-| Pontos de Mana: " << zum->getPm() <<endl;

    fflush(stdin);
    cout << "Pressione ENTER para continuar......." << endl;
    getchar();

    system("cls");
 do{
    cout << "TURNO TIME-2" << endl;
    cout << "============" << endl;
    cout << "Escolha quem vai atacar: " << endl;
    cout << "1-ANIMAL " << endl;
    cout << "2-TROLL " << endl;
    cout << "3-DRAGAO " << endl;
    cout << "4-ZUMBI " << endl;
    cout << "Escolha a opcao: " << endl;
    cin >> x;
    if(x!=1 && x!=2 && x!=3 && x!=4)
        cout << "Valor invalido" << endl;
    }while(x!=1 && x!=2 && x!=3 && x!=4);
    switch(x){
     case 1:
        dmg=anim->getDano();
        if(anim->getPv()<=0){
            cout << "ANIMAL esta morto e n pode atacar" << endl;
            dmg=0;
        }
        break;
    case 2:
        dmg=tro->getDano();
        if(tro->getPv()<=0){
            cout << "TROLL esta morto e n pode atacar" << endl;
            dmg=0;
        }
        break;
    case 3:
        dmg=drag->getDano();
        if(drag->getPv()<=0){
            cout << "DRAGAO esta morto e n pode atacar" << endl;
            dmg=0;
        }
        break;
    case 4:
        dmg=zum->getDano();
        if(zum->getPv()<=0){
            cout << "ZUMBI esta morto e n pode atacar" << endl;
            dmg=0;
        }
        break;
        }


   do{
    cout << "============" << endl;
    cout << "Escolha o alvo: " << endl;
    cout << "1-GUERREIRO " << endl;
    cout << "2-LADINO " << endl;
    cout << "3-MAGO " << endl;
    cout << "4-PALADINO " << endl;
    cout << "Escolha a opcao: " << endl;
    cin >> x;
    if(x!=1 && x!=2 && x!=3 && x!=4)
        cout << "Valor invalido" << endl;
    }while(x!=1 && x!=2 && x!=3 && x!=4);
    switch(x){
     case 1:
        gue->recDano(dmg);
        if(gue->getPv()<0)
            gue->setPv(0);
        break;
    case 2:
        lad->recDano(dmg);
        if(lad->getPv()<0)
            lad->setPv(0);
        break;
    case 3:
        mago->recDano(dmg);
        if(mago->getPv()<0)
            mago->setPv(0);
        break;
    case 4:
        pala->recDano(dmg);
        if(pala->getPv()<0)
            pala->setPv(0);
        break;
    }

    if(gue->getPv()+lad->getPv()+mago->getPv()+pala->getPv()<=0)
        vid1=1;
    if(anim->getPv()+tro->getPv()+drag->getPv()+zum->getPv()<=0)
        vid2=1;

}while(vid1==0 && vid2==0);

    system("cls");

    if(vid1==0)
        cout << "TIME 1 vitorioso" << endl;
    else if(vid2==0)
        cout << "TIME 2 vitorioso" << endl;

return 0;
}
