#include <stdio.h>
int main(void)
{
    char nome[7]={'R','o','b','s','o','n','\0'};
    char roupa[]={'a','z','u','l','\0'};
    char sapato[9]={'d','e',' ','c','o','u','r','o','\0'};

    printf("Meu nome é %s, eu visto a roupa %s e meus sapatos são %s.\n",nome,roupa,sapato);

    return(0);
}