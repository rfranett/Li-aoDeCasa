#include <stdio.h>

int main(void)
{
    float alt;
    float larg;
    float area;
    float dema;

    printf("digite a altura a ser pintada:");
    scanf("%f",&alt);

    printf("digite a largura a ser pintada:");
    scanf("%f",&larg);

    printf("Digite quantas demãos serão aplicadas:");
    scanf("%f",&dema);


    area = alt*larg*dema;

    printf("a area a ser pintada é de: %.3f metros quadrados.\n",area);



    return(0);
}