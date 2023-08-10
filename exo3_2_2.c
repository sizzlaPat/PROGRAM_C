#include<stdio.h>
#include<stdlib.h>

/*
Initialisation d'un pointeur
Écrivez un programme qui utilise malloc pour allouer un espace pour un int, l'initialise à 5,
 puis imprime cette valeur via le pointeur avant de libérer l'espace.
*/
/*Tableau dynamique
Écrivez un programme qui utilise malloc pour allouer un tableau de 5 int. Initialisez-le avec les valeurs de 1 à 5, puis imprimez ces valeurs avant de libérer l'espace.
*/
/*
Fonction strlen personnalisée
Écrivez une fonction mon_strlen qui prend en entrée une chaîne de caractères et 
retourne sa longueur (sans utiliser la fonction strlen de la bibliothèque).
*/
/*
Fonction strcpy personnalisée
Écrivez une fonction mon_strcpy qui prend deux chaînes (source et destination) et 
copie la source dans la destination. Assurez-vous que la destination a suffisamment d'espace!
*/
/*
Fonction strdup personnalisée
Écrivez une fonction mon_strdup qui prend une chaîne en entrée et retourne un nouveau pointeur 
vers une nouvelle chaîne qui est une copie de l'entrée. Utilisez malloc pour allouer la mémoire.

*/

/*
Fonction strcat personnalisée
Écrivez une fonction mon_strcat qui prend deux chaînes (destination et source) et ajoute la source à la fin de la destination.


*/
/*

Recherche d'un caractère
Écrivez une fonction qui prend une chaîne et un caractère en entrée, et renvoie un pointeur vers la première occurrence de ce caractère dans la chaîne (ou NULL si le caractère n'est pas trouvé).

*/
void mon_strcat(char *source, char *destination){

        int longueur_source = mon_strlen(source);
        int longueur_destination = mon_strlen(destination);
        for (int i = longueur_source ; destination[i] != '\0'; i++)
        {
           destination[i]= source[i-longueur_source];
        }
        
       destination[longueur_destination+longueur_source]='\0';


}

//     Fonction strlen personnalisée
int mon_strlen(char *tab){
        int compteur=0;
        for (int i = 0; tab[i] !='\0'; i++)
        compteur++;  
        
        return compteur;
        }


//Fonction strcpy personnalisée

void mon_strcpy(char *source , char *destination){

        int longueur_source = mon_strlen(source);
        
            for (int i = 0; source[i] !='\0'; i++)
            {
                
            destination[i] = source[i];
           
            }
            destination[longueur_source]='\0';
            
             
}

char *mon_strdup(char *chaine){
    int longueur_chaine= mon_strlen(chaine)+1;
    char *ptr = malloc(sizeof(char)*longueur_chaine);
    mon_strcpy(chaine,ptr);
    return ptr;
}


int main(){
//Decalage de bit exemple prof
    char  *ptr = malloc(sizeof(char)*5);
    char chaine[] = "Stan";

    for (int i = 0; chaine[i] != '\0'; i++)
    {
        * (ptr +i) = chaine[i];
    }
   
        ptr[0]='s';
        printf("%c\n",ptr[0]);
        printf("%c\n",*ptr);
        
    char *destination = malloc(sizeof(char)*7);


   //Initialisation d'un pointeur()
    printf("****** Initialisation d'un pointeur**********\n");
    int *entier = malloc(sizeof(int));
    *entier=5;
    printf("%d\n",*entier);

    //Tableau dynamique
        printf("****** Tableau dynamique**********\n");
    int   *tab_entiers_5 = malloc(sizeof(int)*5);

    for(int i=1;i<=5;i++){
        tab_entiers_5[i]=i;
        printf("%d\t",tab_entiers_5[i]);
    }
    printf("\n");
    //     Fonction strlen personnalisée
        printf("****** Fonction strlen personnalisée**********\n");

    char* salutation ="coucou";
    printf("La longeur de %s est de %d  ",salutation,mon_strlen(salutation));
     printf("\n");
    printf("****** Fonction strcpy personnalisée**********\n");
        
        mon_strcpy("petit",destination);

        printf("%s\n",destination);

    // Fonction strdup personnalisée

        printf("****** Fonction strdup personnalisée**********\n");
        char *nouveau_pointeur = mon_strdup("bonjour");

        printf("%s\n",nouveau_pointeur);


        
        free(destination);
        free(entier);
        free(tab_entiers_5);
    return 0;
}


