#include<stdio.h>

/*
Exercice 1:
Vous allez devoir creer une fonction qui prendre un pointeur, et changer la valeur du pointeur pour une autre valeur.

*/
/*
Exercice 2:
Dans le cadre de cet exercice Vous allez devoir creer une fonction qui prends un pointeur en argument.
Cette fonction appelera une autre fonctions qui prendra ce meme pointeur pour changer sa valeur.

*/
/*
Exercice 3:
Faite la meme chose que l'exercice precedants mais en rajoutant encore une fonction dans la fonction.
*/
/*
Exercice 4:
Creer une fonction qui prends en parametre un double pointeur `**var` et changer sa valeur pour qu'elle soit egale a 42.
*/
/*
Exercice 5 :
Faite le maxi pointeur suivant : `**********var` et changer sa valeur
*/
void maxiPtr(int **********var){
    **********var=56;
}

void doublePtr(int **ptr ){

**ptr= 42;

}

void miseAjour(int *pointeur, int update){

*pointeur=update;

}
void miseAjour2(int *pointeur){

*pointeur= 50;

}
void test(int *ptr){
    miseAjour2(ptr);
}

void test2(int *ptr){
    test(ptr);
}

int main(){

    int update= 50;
    
   
    
   int pointeur= 10;
   int *pointeur1= &pointeur;
   int **pointeur2= &pointeur1;
   int ***pointeur3= &pointeur2;
   int ****pointeur4= &pointeur3;
   int *****pointeur5= &pointeur4;
   int ******pointeur6= &pointeur5;
   int *******pointeur7= &pointeur6;
   int ********pointeur8= &pointeur7;
   int *********pointeur9= &pointeur8;
   int **********pointeur10=&pointeur9;

    int pointeur22= 10;
    int pointeur32=25;
    int pointeur42=25;
    int *point=&pointeur;
   
    miseAjour(&pointeur,update);
    printf("%d\n",pointeur);
    miseAjour2(&pointeur22);
    printf("%d\n",pointeur22);
    test(&pointeur32);
    printf("%d\n",pointeur32);
    test2(&pointeur42);
    printf("%d\n",pointeur42);
    doublePtr(&point);
    printf("%d\n",pointeur);
    **********pointeur10=789;
    printf("%d\n",pointeur);

    

  










    return 0;
}