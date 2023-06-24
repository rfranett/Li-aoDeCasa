#include <stdio.h>

int main(void)
{   
    int v;
    int l;
    int p;
    int f;
     

    printf("quantas verduras?\n");
    scanf("%i",&v);

    printf("quantos legumes?\n");
    scanf("%i",&l);

    printf("quantos peixes?\n");
    scanf("%i",&p);

    printf("quantas frutas?\n");
    scanf("%i",&f);

    printf ("fui a feira e complei %i verduras, %i legumes, %i peixes e %i frutas.\n",v,l,p,f);


    return(0);
}