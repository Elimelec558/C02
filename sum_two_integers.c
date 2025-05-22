//Programme demandant à l'utilisateur de saisir deux entiers, puis affiche leur somme.
#include<stdio.h>
int main(){
    int nombre1, nombre2, somme;
    // Demande à l'utilisateur de saisir deux entiers
    printf("Entrez deux nombres entiers séparés par un espace :\n");
    scanf("%d %d", &nombre1, &nombre2);
    // Calcul de la somme
    somme = nombre1 + nombre2;
    // Affichage du résultat
    printf("La somme est : %d\n", somme);
}
