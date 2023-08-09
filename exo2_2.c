#include<stdio.h>




int main(){
/*
Exercice 1: Initialisation et affichage

    Écrivez un programme qui initialise un tableau de 10 entiers.
    Remplissez-le avec les chiffres de 1 à 10.
    Affichez le contenu du tableau.

*/
int tableau_Entier[10] ={};

for(int i=0; i<10;i++){
    tableau_Entier[i]=i+1;

}

for(int i=0; i<10;i++){
    printf("%d",tableau_Entier[i]);
    printf("\n");

}

/*
Exercice 2: Somme et Moyenne

    Écrivez un programme qui demande à l'utilisateur d'entrer 5 nombres.
    Stockez ces nombres dans un tableau.
    Calculez et affichez la somme et la moyenne de ces nombres.
*/
/*
Exercice 3: Trouver le maximum et le minimum

    Écrivez un programme qui demande à l'utilisateur d'entrer 10 nombres.
    Stockez ces nombres dans un tableau.
    Trouvez et affichez le plus grand et le plus petit nombre du tableau.
*/
/*Exercice 4: Inversion d'un tableau

    Écrivez un programme qui demande à l'utilisateur d'entrer 7 nombres.
    Stockez ces nombres dans un tableau.
    Inversez le contenu du tableau.
    Affichez le tableau inversé
*/
int choix=0;
int somme =0;
int moyenne=0;
int max=0;
int min=0;
int tableau_Inverse_Entier_Utilisateur [10];
int tableau_Entier_Utilisateur [10]={};
for(int i=0;i<10;i++){
printf("Veuillez saisir le chiffre numero %d \n",i+1);   
scanf("%d", &choix) ;
tableau_Entier_Utilisateur[i]=choix;
somme += choix;

}
printf("La somme est de  %d",somme);
printf("\n");
printf("La moyenne  est de  %d \n",somme/5);

max=tableau_Entier_Utilisateur[0];
min=tableau_Entier_Utilisateur[0];

for(int i=0;i<10;i++){
if(tableau_Entier_Utilisateur[i]>max){
max=tableau_Entier_Utilisateur[i];
}
if(tableau_Entier_Utilisateur[i]<min){
min=tableau_Entier_Utilisateur[i];
}
}

printf("Le maximum dans le tableau est égale à %d et le minimum est égale à %d", max,min);

printf("\n");

for(int i=9;i>=0;i--){
    printf("%d\t",tableau_Entier_Utilisateur[9-i]);
    tableau_Inverse_Entier_Utilisateur[9-i]=tableau_Entier_Utilisateur[i];
}
printf("\n");
for(int i=0;i<10;i++){
printf("%d\t",tableau_Inverse_Entier_Utilisateur[i]);

}
printf("\n");





return 0;
}