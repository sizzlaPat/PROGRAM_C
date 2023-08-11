#ifndef LIB_STRUCTURE_H
#define  LIB_STRUCTURE_H
#include<stdio.h>
#include<stdlib.h>
/*
Exercice 1: Définition et Initialisation

Définissez une structure Etudiant qui contient les éléments suivants:

    Nom (chaîne de caractères)
    Age (entier)
    Note (flottant)

*/
typedef struct{
char *Nom;
int Age;
float Note;
}Etudiant;

typedef struct{
    int x;
    int y;
    
}Point;

typedef struct{
int jour;
int mois;
int Annee;
}Date;
    
#endif