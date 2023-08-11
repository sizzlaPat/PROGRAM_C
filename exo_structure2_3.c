# include "Lib_structure.h"

/*
Exercice 3: Utilisation de Pointeurs avec les Structures

Définissez une structure Date avec les champs jour, mois et année. Écrivez une fonction qui prend un pointeur vers une date et modifie la date en ajoutant un jour.

*/
Date CreateDate(int jour,int mois,int Annee){
    Date dt;
    dt.jour = jour;
    dt.mois = mois;
    dt.Annee = Annee;
    return dt;
}

void affichageDate(Date date){
    printf("nous somme le  %d/%d/%d",date.jour,date.mois,date.Annee);
}

void modif_Date(Date *date){

    date->jour = date->jour + 1;

}


int main (){

Date aujourdhui = CreateDate(11, 8 ,2023);
affichageDate(aujourdhui);
 
modif_Date(&aujourdhui);

affichageDate(aujourdhui);

    return 0;
}