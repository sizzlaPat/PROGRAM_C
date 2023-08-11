#ifndef LIBRAIRIE_H
#define  LIBRAIRIE_H

//une fonction mon_strcat qui prend deux chaînes (destination et source) et ajoute la source à la fin de la destination
void mon_strcat(char *source, char *destination);

//une fonction mon_strlen qui prend en entrée une chaîne de caractères et retourne sa longueur
int mon_strlen(char *tab);

//une fonction mon_strcpy qui prend deux chaînes (source et destination) et copie la source dans la destination.
void mon_strcpy(char *source , char *destination);  

//une fonction mon_strdup qui prend une chaîne en entrée et retourne un nouveau pointeur vers une nouvelle chaîne qui est une copie de l'entrée. Utilisez malloc pour allouer la mémoire.
char *mon_strdup(char *chaine);

//une fonction qui prend en paramètre deux entiers et retourne leur somme.
int somme(int nb1, int nb2);

//une fonction qui prend en paramètre un caractère et retourne sa valeur ASCII.
int ASCII_value( char caractere);

//une boucle for qui affiche les nombres de 1 à 10.

//Cette fonction doit afficher la table de multiplication pour cet entier jusqu'à 10 à l'aide d'une boucle.
    
int tableMultiplication(int nb);

//
int sommeEntiers(int nombre);

#endif