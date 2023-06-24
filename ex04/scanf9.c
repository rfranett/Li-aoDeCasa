#include <stdio.h>

int main()
{  
    int x;
    int y;
    int z;


    printf("quantas tulipas?\n");
    scanf("%i",&x);

    printf("quantas magnolias?\n");
    scanf("%i",&y);

    printf("quantas rosas?\n");
    scanf("%i",&z);

    int t= x+y+z;



   printf("No jardim plantei %i tulipas,%i magnólias e %i rosas, tendo %i flores no meu jardim.\n",x,y,z,t);


    return(0);
}