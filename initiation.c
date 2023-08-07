#include <stdio.h>

int multiplication (int a){
    return a*a;
}

int main() {

    int a=10;
    printf( "le carré de %d est : %d\n", a, multiplication(a));
    
    return 0;
}
