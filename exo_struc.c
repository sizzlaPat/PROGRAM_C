#include "Lib.h"

Chat createChat( char couleur,char type_poil,char sexe,int taille,char puce,char name){
    Chat cat;
    cat.couleur=couleur;
    cat.type_poil= type_poil;
    cat.sexe = sexe;
   cat.taille = taille;
    cat.puce =puce;
    cat.name = name;
return cat;

}

Tour createTour(int x, int y , char couleur,int numero){

    Tour t;
    t.x= x;
    t.y = y;
    t.couleur= couleur;
    t.numero = numero;

    return t;

};


int main(){

    Chat chaton = createChat('w','L','F',1,'N','O');
 
printf("%c\n",chaton.sexe);






    return 0;
}