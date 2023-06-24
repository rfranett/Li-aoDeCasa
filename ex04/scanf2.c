#include <stdio.h>

int main(void)
{

    int bol;
    int pi;
    int pip;

    printf("quantas bolinhas de gude?\n");
    scanf("%i", &bol);

    printf("quantos piões?\n");
    scanf("%i", &pi);

    printf("quantos pipas?\n");
    scanf("%i", &pip);

    printf("em uma semana me divertindo eu consegui:%i bolinhas de gude,%i piões e %i pipas.\n", bol, pi, pip);

    return (0);
}