#include <stdio.h>

int main() {
    int n, i;
    long factorial = 1; // Utilisation de long long pour éviter le dépassement d'entier
    scanf("%d", &n);
        for (i = 1; i <= n; i++) {
            factorial *= i;
        }
        printf("Le factoriel de %d est : %ld\n", n, factorial);
    return 0;
}




    