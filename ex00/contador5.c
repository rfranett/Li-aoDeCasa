#include <unistd.h>

int main(void)
{
     char cor[]="verde amarelo azul vermelho preto branco";
     int cont =0;

 while (cor[cont] != '\0')
 {
   cont++;
 }
 
 write(1,cor,cont+1);
 write(1,"\n",1);
 return(0);

}