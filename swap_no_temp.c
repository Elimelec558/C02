#include <stdio.h>
int main() {
    int a, b;
    // Lecture des valeurs
    scanf("%d %d", &a, &b);
    // Échange sans variable temporaire
    a = a + b;
    b = a - b;
    a = a - b;
    // Affichage du résultat
    printf("Après échange: a = %d, b = %d\n", a, b);
    return 0;
}
