# include "Lib_structure.h"


//Écrivez un programme qui crée une structure Point contenant deux entiers x et y. Demandez à l'utilisateur de saisir les valeurs de x et y, puis imprimez-les.
Point CreatePoint(int x,int y){
    Point pt;
    pt.x = x;
    pt.y=y;
 return pt;
}

void affichagePoint(Point pt){

    printf("Coordonnées du point : \n x = %d\n y = %d\n", pt.x,pt.y);
}

int  main(){

int x;
int y;

printf("Veuillez saisir la coordonnée x");   
scanf("%d", &x) ;
printf("Veuillez saisir la coordonnée y");   
scanf("%d", &y) ;
Point pt =CreatePoint(x,y);
affichagePoint(pt);




    return 0;
}