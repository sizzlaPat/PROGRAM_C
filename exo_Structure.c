#include<stdio.h>

struct Fou{
    int x;
    int y;
    char couleur;


};

// autre facon de définir une structure
typedef  struct {
    int x;
    int y;
    char couleur;
} cavalier;


int main(){

struct Fou f1;
f1.x = 2;
f1.y = 3 ;
f1.couleur='w';

cavalier c;
c.x=15;
c.y=6;
c.couleur='c';

printf("%d\n",f1.x);
printf("%d\n",f1.y);
printf("%c\n",f1.couleur);

printf("%d\n",c.x);
printf("%d\n",c.y);
printf("%c\n",c.couleur);
    return 0;
}