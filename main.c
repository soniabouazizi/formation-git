#include <stdio.h>

// Fonction pour additionner deux nombres
int add(int a, int b) {
    return a + b;
}

int main() {
    printf("Hello Git\n");

    int x = 5;
    int y = 7;
    int result = add(x, y);

    printf("La somme de %d et %d est %d\n", x, y, result);
    return 0;
}