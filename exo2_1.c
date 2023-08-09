#include<stdio.h>

/*
Déclarez trois variables de types différents (int, float, char).
Assignez-leur des valeurs.
Affichez ces variables sur la console en utilisant printf().


*/
/*
Écrivez une fonction qui prend en paramètre deux entiers et retourne leur somme.
    Écrivez une autre fonction qui prend un caractère et retourne sa valeur ASCII.
    Testez ces fonctions en appelant depuis la fonction main().
*/

/*
 Écrivez une boucle for qui affiche les nombres de 1 à 10.
    Écrivez une boucle while qui affiche les nombres pairs de 0 à 20.
*/

/*
Écrivez une fonction appelée tableMultiplication qui prend un entier en paramètre.
    Cette fonction doit afficher la table de multiplication pour cet entier jusqu'à 10 à l'aide d'une boucle.
    Depuis la fonction main(), appelez cette fonction pour afficher les tables de multiplication de 2 à 5.
*/
/*
Exercice 4: Boucles Imbriquées - Dessiner un rectangle
À l’aide de boucles imbriquées, dessinez un rectangle de ‘*’ de 5 lignes et 7 colonnes.
*/


int somme(int nb1, int nb2){
   return nb1+nb2; 
}

int ASCII_value( char caractere){

  return (int)caractere;  
}

int tableMultiplication(int nb){
    for(int i=0;i<=10;i++){

        printf("%d * %d = %d",nb,i,nb*i);
         printf("\n");
    }
}
int sommeEntiers(int nombre){
    int total=0;
    for(int i=1;i<=nombre;i++){
        total+=i;
    }

    return total;
}



int main(){

    int entier= 5;
    float reel=1.6;
    char caractere='P';
    int premier_nombre =89;
    int second_nombre= 45;
    int compteur= 0;
    
    printf(" Exercice 1!!!!!!!!!");
    printf("mon entier est  %d  !!",entier);
    printf("\n");
    printf("mon nombre est reel %f ", reel);
    printf("\n");
    printf("mon caractere est  %c", caractere);


    printf("Exercice2!!!!!!!!!!");
    int resultat= somme(premier_nombre,second_nombre);
    int valeur_caractere= ASCII_value(caractere);
    printf("somme de %d et %d est egale à  %d",premier_nombre,second_nombre,resultat);
    printf("\n");
    printf("la valeur du caractere %c  est  %d",ASCII_value(caractere) );


    printf("******EXERCICE 3 ****************");

    for (int i=1; i<=10;i++){
        printf("%d",i);
        printf("\n");

    }

    while (compteur<21)
    {
        printf("%d",compteur);
        printf("\n");
        compteur++;
    }
    
    printf("******Exercice 5 ***********");

    printf("afficher les tables de multiplication de 2 à 5.");
     printf("\n");

    for (int j=2;j<=5;j++){

        printf("Table de Multiplication de  %d",j);
        printf("\n");
        tableMultiplication(j);
        printf("\n");
    }

    printf("*********EXERCICE 4 *********");
/*
Exercice 4: Boucles Imbriquées - Dessiner un rectangle
À l’aide de boucles imbriquées, dessinez un rectangle de ‘*’ de 5 lignes et 7 colonnes.
*/
    printf("\n");
for (int i=0;i<5;i++){

    for(int j =0;j<7;j++){
        printf("*");
    }
    printf("\n");

}


printf( "****Exo supplementaire À l’aide de boucles imbriquées, dessinez le motif suivant pour une hauteur de 5: \n");

for (int i= 0; i<5;i++){

    for(int j=0;j<=i;j++){
        printf("%d",j+1);
    }
    printf("\n");
    

}
for (int i= 5; i>=0;i--){

    for(int j=0;j<=i;j++){
        printf("%d",j+1);
    }
    printf("\n");
    

}

/*
Exercice 6: Fonctions avec des boucles - Somme des entiers

    Écrivez une fonction appelée sommeEntiers qui prend un entier n en paramètre.
    La fonction doit retourner la somme de tous les entiers de 1 à n en utilisant une boucle.
    Testez cette fonction en affichant le résultat pour différentes valeurs de n dans main().
*/

/*
Taper son prenom
*/

char prenom[7] ={};
prenom[0] = 'p';
prenom[1] = 'a';
prenom[2] = 't';
prenom[3] = 'r';
prenom[4] = 'i';
prenom[5] = 'c';
prenom[6] = 'e';
prenom[7] = '\0';

for(int i=0;prenom[i] !='\0';i++){

    printf("%c",prenom[i]);
}






return 0;
}
