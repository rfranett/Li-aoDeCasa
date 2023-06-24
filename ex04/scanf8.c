#include<stdio.h>

int main(void)
{  int x;
   int y;
   int z;
   int t;

    printf("quantos carros tem na avenida?\n");
    scanf("%i",&x);

    printf("quantos caminhoes tem na avenida?\n");
    scanf("%i",&y);

    printf("quantas motos tem na avenida?\n");
    scanf("%i",&z);

    t = x+y+z;

    printf("na avenida tem %i carros %i caminhoes e %i motos.e na avenida agora temos %i veiculos?\n",x,y,z,t);

    return(0);
}