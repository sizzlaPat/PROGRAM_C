#include<stdio.h>



int main(){

int etoile= 1;
int espace = 5;


for (int niveau=5; niveau >0; niveau--){

    for(int espace=niveau-1; espace>0;espace--){
        printf(" ");
    }
    for(int i=0; i<etoile;i++){
        printf("*");
    }
    printf("\n");
    etoile +=2;

}

int hauteur_tronc=(int)(7*0,2);

for(int k=hauteur_tronc;k>0;k--){
    for (int vide = 0; vide < (etoile/2)-1; vide++)
    {
        printf(" ");
    }
    
printf("|\n");
}


return 0;    
}