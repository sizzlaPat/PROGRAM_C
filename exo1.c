#include<stdio.h>

int estPair(int nombre){
    if (nombre%2 ==0){
        return  1;
    }
    return 0;
}

int estPremier(int nombre){
if (nombre==1){
    return 1;
}
for( int i=2; i<nombre;i++) 
if (nombre%i == 0){
return 0;
}
return 1;
}

void afficherResultat(int nombre,int pair, int premier){

    if(pair==1 && premier==1){
        printf("%d  est un nombre pair et premier",nombre);
    }
        else if(pair==1 && premier ==0){
        printf("%d  est un nombre pair ", nombre);
    }
         else if(pair==0 && premier==1){
         printf("%d  est un nombre premier ", nombre);
    }
    else 
        printf("%d  n'est ni pair ni premier ", nombre);
}

void afficherResultatSwitch(int nombre,int pair, int premier){
    switch (pair)

    {
        case 1:
            if (premier==1){
            printf("%d  est un nombre pair et premier",nombre);   
            }
            else{
                printf("%d  est un nombre pair ", nombre); 
            }
        break;
        case 0:
        if (premier==1){
        printf("%d  est un nombre premier ", nombre);
            }
            else{
                printf("%d  n'est ni pair ni premier ", nombre);
            }
        break;
        default:
            printf("Erreur de saisie");
        break;
        }
   
}

void afficherResultat2(int nombre,int pair, int premier){

    if(pair==1 && premier==1){
        printf("%d  est un nombre pair et premier",nombre);
    }
        else if(pair==1 ){
        printf("%d  est un nombre pair ", nombre);
    }
         else if(premier==1){
         printf("%d  est un nombre premier ", nombre);
    }
    else 
        printf("%d  n'est ni pair ni premier ", nombre);
}

int main() {

int choix =213;
int pair=estPair(choix);
int premier=estPremier(choix);

/*afficherResultat(choix,pair,premier); */
afficherResultat2(choix,pair,premier);
afficherResultatSwitch(choix,pair,premier);

return  0;
}