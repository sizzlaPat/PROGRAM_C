#include<stdio.h>

/*
Exercice 6: Rotation d'un tableau

    Écrivez un programme qui demande à l'utilisateur d'entrer 8 nombres.
    Stockez ces nombres dans un tableau.
    Effectuez une rotation à droite du tableau (le dernier élément devient le premier).
    Affichez le tableau après rotation.


*/


int main(){
int choix=0;
int tableau_Entier_Utilisateur[8];
for(int i=0;i<8 ;i++){
printf("Veuillez saisir le chiffre numero %d \n",i+1);   
scanf("%d", &choix) ;
tableau_Entier_Utilisateur[i]=choix;
}

for(int i=0;i<8;i++){
int tmp=0;
tmp=tableau_Entier_Utilisateur[i];


}



    return 0;
}