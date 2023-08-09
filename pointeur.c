#include <stdio.h>

void School42(int *a){
printf("Dans la fonction l'adresse de a est %X\n",a);
    *a=42;
}




int main(){

int a=0;
printf("initialisation de  l'adresse de a est %X\n",a);
School42(&a);

printf("La valeur de  a aprés  passage dans la fonction %d\n", a);
printf("Dans la fonction l'adresse de a est %X\n",a);

    return 0;
}