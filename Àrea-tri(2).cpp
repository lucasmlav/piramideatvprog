#include <stdio.h>

void triangulo(int altura) {
    int i, j, area = 0;

    for (i = 1; i <= altura; i++) {
        for (j = 1; j <= i; j++) {
            printf("# ");
            area++; // Incrementa a �rea a cada '#' impresso
        }
        printf("\n");
    }

    printf("\n�rea do tri�ngulo: %d\n", area);
}

int main() {
    int altura;

    printf("Digite a altura do tri�ngulo: ");
    scanf("%d", &altura);

    triangulo(altura);

    return 0;
}

