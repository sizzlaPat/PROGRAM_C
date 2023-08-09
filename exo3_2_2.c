#include<stdio.h>
#include<stdlib.h>

/*
Initialisation d'un pointeur
Écrivez un programme qui utilise malloc pour allouer un espace pour un int, l'initialise à 5,
 puis imprime cette valeur via le pointeur avant de libérer l'espace.
*/
/*Tableau dynamique
Écrivez un programme qui utilise malloc pour allouer un tableau de 5 int. Initialisez-le avec les valeurs de 1 à 5, puis imprimez ces valeurs avant de libérer l'espace.
*/
/*
Fonction strlen personnalisée
Écrivez une fonction mon_strlen qui prend en entrée une chaîne de caractères et 
retourne sa longueur (sans utiliser la fonction strlen de la bibliothèque).
*/
/*
Fonction strcpy personnalisée
Écrivez une fonction mon_strcpy qui prend deux chaînes (source et destination) et 
copie la source dans la destination. Assurez-vous que la destination a suffisamment d'espace!
*/

//Fonction strcpy personnalisée

void mon_strcpy(char *chaine1 , char *chaine2){

   
    if(mon_strlen(chaine1) <= mon_strlen(chaine2) ){
     int tmp=*chaine1;
    *chaine1=*chaine2;
    *chaine2=tmp;
    }
}



//     Fonction strlen personnalisée
int mon_strlen(char *tab){
        int compteur=0;
        for (int i = 0; tab[i] !='\0'; i++)
        compteur++;  
        
        return compteur;
        }


int main(){

   //Initialisation d'un pointeur
    printf("****** Initialisation d'un pointeur**********\n");
    int *entier = malloc(sizeof(int));
    *entier=5;
    printf("%d\n",*entier);

    //Tableau dynamique
        printf("****** Tableau dynamique**********\n");
    int   *tab_entiers_5 = malloc(sizeof(int)*5);

    for(int i=1;i<=5;i++){
        tab_entiers_5[i]=i;
        printf("%d\t",tab_entiers_5[i]);
    }
    printf("\n");
    //     Fonction strlen personnalisée
        printf("****** Fonction strlen personnalisée**********\n");

    char* salutation ="coucou";
    printf("La longeur de %s est de %d  ",salutation,mon_strlen(salutation));

    
















free(entier);
free(tab_entiers_5);
    return 0;
}


