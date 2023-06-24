#include <stdio.h>

int main(void)
{
    int cor;
    int ton;
    float mis;

     printf("com quantas cores?");
     scanf("%i",&cor);

     printf("com quantos tons?");
     scanf("%i",&ton);

     printf("Quantos metros de tecido tecido?");
     scanf("%f",&mis);

     printf("misturei%i cores, para ter %i tons e assim colorir %.2f m de tecido",cor,ton,mis);
     return(0);
}