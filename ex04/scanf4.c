#include <stdio.h>

int main(void)
{  int p;
   int f;
   int c;

   printf("quantos pregos?\n");
   scanf("%i",&p);

    printf("quantos parafusos?\n");
    scanf("%i",&f);

    printf("quantas janelas?\n");
    scanf("%i",&c);

    
    printf("complei %i pregos, e %i parafusos para arrumar %i janelas.\n",p,f,c);

    return(0);
}
