#include<stdio.h>
#include<stdlib.h>


int main(){

int *entier= malloc(sizeof(int));
long *longueur = malloc(sizeof(long));
int   *entiers_5 = malloc(sizeof(int)*5);
char *caractere = malloc(sizeof(char));
char *prenom  = malloc(sizeof(char)*8);

prenom[0]= 'p';
prenom[1]='a';
prenom[2]='t';
prenom[3]='r';
prenom[4]='i';
prenom[5]='c';
prenom[6]='e';
prenom[7]='\0';

printf("%s\n",prenom);

free(entier);
free(longueur);
free(entiers_5);
free(caractere);
free(prenom);

    return 0;
}



