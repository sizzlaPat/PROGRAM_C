# include "Lib_structure.h"

/*
Exercice 1: Définition et Initialisation

Définissez une structure Etudiant qui contient les éléments suivants:

    Nom (chaîne de caractères)
    Age (entier)
    Note (flottant)



*/
Etudiant create_Etudiant(char *Nom,int Age,float Note){
    Etudiant etd;
    etd.Nom = Nom;
    etd.Age =Age;
    etd.Note = Note;

return etd;
}

void affichageEtudiant(Etudiant etd){

printf("l'étudiant s'appelle %s\n  il a %d  ans \n Sa note est de %f\n",etd.Nom,etd.Age,etd.Note);

}

int main(){

Etudiant etd =create_Etudiant("Dupont",19,15.5);
affichageEtudiant(etd);





    return 0;
}