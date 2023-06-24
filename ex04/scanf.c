#include <stdio.h>

int main(void)
{
   int aga;
   int sap;
   int cal;


    printf("Quantos agasalhos?.\n");
    scanf("%i",&aga);

    printf("Quantos pares de sapatos?\n");
    scanf("%i",&sap);

    printf("Quantas calsas?\n");
    scanf("%i",&cal);
     
     int doa =aga+sap+cal;

    printf("Você doou: %i pecas sendo: %i calcas, %i sapatos, %i agasalhos.\n",doa,cal,sap,aga);

    return (0);
}