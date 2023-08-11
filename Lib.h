#ifndef LIB_H
#define  LIB_H

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct{
    char couleur;
    char type_poil;
    char sexe;
    int taille;
    bool puce;
    char name;
    bool nage;
} Chien;
    
typedef struct{
    char couleur;
    char type_poil;
    char sexe;
    int taille;
    char puce;
    char name;
} Chat;

typedef struct{
    int x;
    int y;
    char couleur;
    int numero;
} Tour;

typedef struct{
    int x;
    int y;
    char couleur;
    int numero;
} Fou;

typedef struct{
    int x;
    int y;
    char couleur;
    int numero;
} Reine;

Chat createChat( char couleur,char type_poil,char sexe,int taille,char puce,char name);
Tour createTour(int x, int y , char couleur,int numero);

#endif