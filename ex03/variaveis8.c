#include <stdio.h>
#include <string.h>

    int main()
    {
        char nome[7] = "nome";
        char roupa[] = "roupa";
        char sapato[9] = "sapato";

           strcpy(nome, "robson");
           strcpy(roupa, "azul");
           strcpy(sapato,"de couro");

        printf("meu nome é %s , eu visto a roupa %s e meus sapato e %s.\n",nome,roupa,sapato);
        return(0);
    }