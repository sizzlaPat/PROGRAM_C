#include<stdio.h>



// echanger les valeur de pointeur
void choucroute(int *saucisse, int *choux){
    printf("adresse de a dans la fonction  %X\n",saucisse);
    printf("adresse de b dans la fonction  %X\n",choux);
    int tmp=*saucisse;
    *saucisse=*choux;
    *choux=tmp;




}

void choucrouteAdresse(int *saucisse, int *choux){
    int *tmp= &saucisse;
    // &saucisse=&choux;
   //  &choux=tmp;

}

int main(){

int a= 12;
int b= 26;

printf("valeur de a %d\n",a);
printf("valeur de b %d\n",b);
printf("adresse de a %X\n",a);
printf("adresse de b %X\n",b);

choucroute(&a,&b);

printf("valeur de a %d\n",a);
printf("valeur de b %d\n",b);






return 0;
}