#include<stdio.h>



int main(){

int nb_etoile=1;
int hauteur=10;
int nb_etoile1=1;
int hauteur1=10;

for (hauteur; hauteur >0; hauteur--)
{
    for(int nb_Vide=0; nb_Vide<hauteur;nb_Vide++){
         printf(" ");
    }


    for(int etoile=0;etoile<nb_etoile;etoile++){
        printf("*");
    }

     printf("\n");

    nb_etoile +=2 ;
}

for (hauteur1; hauteur1 >0; hauteur1--)
{
    for(int nb_Vide1=hauteur1; nb_Vide1>=0;nb_Vide1--){
         printf(" ");
    }


    for(int etoile=0;etoile<nb_etoile1;etoile++){
        printf("*");
    }

     printf("\n");

    nb_etoile1 +=2 ;
}






}