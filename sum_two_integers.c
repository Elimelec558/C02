//Programme demandant à l'utilisateur de saisir deux entiers, puis affiche leur somme.
#include<stdio.h>
int main(){
    int nombre1,nombre2;
    printf("Veuillez entrer deux entiers de votre choix:\n");
    scanf("%d %d",&nombre1,&nombre2);
    int somme=nombre1+nombre2;
    printf("La somme est : %d",somme);
    return 0;
    }