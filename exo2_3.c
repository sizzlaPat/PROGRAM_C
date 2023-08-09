#include<stdio.h>

/*
Exercice 5: Fusion de deux tableaux

    Créez deux tableaux de taille 5.
    Remplissez le premier tableau avec des nombres pairs et le second avec des nombres impairs, tous saisis par l'utilisateur.
    Fusionnez ces deux tableaux en un seul tableau de taille 10.
    Affichez le tableau fusionné.
*/


int main(){

int tableau_fusionner[10];
int tableau_Pair_Utilisateur[5];
int tableau_ImPair_Utilisateur[5];
int choix_utilisateur=0;
int compteurPair=0;
int compteurImPair=0;



while (compteurPair<5)
{
printf("Veuillez saisir 5 nombres pair le chiffre numero %d \n ",compteurPair+1);   
scanf("%d", &choix_utilisateur) ;
if(choix_utilisateur%2 == 0){
tableau_Pair_Utilisateur[compteurPair]=choix_utilisateur;
compteurPair++;
}
else 
printf("Merci de saisir un nombre pair");
}
printf("\n");
while (compteurImPair<5)
        {
        printf("Veuillez saisir 5 nombres impair le chiffre numero %d \n ",compteurImPair+1);   
        scanf("%d", &choix_utilisateur) ;
        if(choix_utilisateur%2 != 0){
            tableau_ImPair_Utilisateur[compteurImPair]=choix_utilisateur;
            compteurImPair++;
        }
        else 
            printf("Merci de saisir un nombre impair");
        }

printf("\n");

printf(" ****Tableau de 5 nombres Impairs*****");
for (int i = 0; i < 5; i++)
{
   printf("%d\t",tableau_Pair_Utilisateur[i]); 
}
printf("\n");
printf(" ****Tableau de 5 nombres ImPairs*****");
for (int i = 0; i < 5; i++)
{
   printf("%d\t",tableau_ImPair_Utilisateur[i]); 
}
printf("\n");
for (int i = 0; i < 5; i++)
{
   
    tableau_fusionner[i]=tableau_Pair_Utilisateur[i];
    tableau_fusionner[5+i]=tableau_ImPair_Utilisateur[i];

}
printf("\n");

for (int i = 0; i < 10; i++)
{
   printf("%d\t",tableau_fusionner[i]); 
}
















return 0;
}