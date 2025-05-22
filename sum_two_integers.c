//Programme demandant à l'utilisateur de saisir deux entiers, puis affiche leur somme.
#include<stdio.h>
int main(){
    char operateur;
    int nombre1, nombre2, somme;
    // Demande à l'utilisateur de saisir deux entiers
    printf("Entrez deux nombres entiers separes par un espace :\n");
    scanf("%d %d %c", &nombre1, &nombre2, &operateur);
    switch (operateur) {
        case '+':
            somme = nombre1 + nombre2;
            printf("La somme est : %d\n", somme);
            break;
}
}