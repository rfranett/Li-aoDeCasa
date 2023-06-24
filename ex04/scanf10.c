#include <stdio.h>

int main(void)
{  int x;
   int y;
   int z;
    
    printf("Quantas latinhas de coca cola?\n");
    scanf("%i",&x);

    printf("Quantas latinhas de guarana\n");
    scanf("%i",&y);

    printf("Quantas latinhas de serveja?\n");
    scanf("%i",&z);

    int t = x+y+z;

     printf(" Eu juntei %i Latinhas onde %i são de Coca Cola %i São de Guarana e %i São de cerveja.\n",t,x,y,z);

    return(0);
}