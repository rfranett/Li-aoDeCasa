#include <stdio.h>

int main(void)
{
    int f;
    int c;
    int d;
    int r;

    printf("Quantas frutas você tem?\n");
    scanf("%i", &f);

    printf("Quantas frutas você ira comer?\n");
    scanf("%i", &c);

    printf("Quantas frutas você ira doar?\n");
    scanf("%i", &d);

    r = f - c - d;

    printf("Se eu colocar %i Frutas na cesta e comer %i doando %i ainda  ficarei com %i frutas:\n", f, c, d, r);

    return (0);
}
