#include <unistd.h>

int main(void)
{  char frut []="banana laranja pessegos uva abacaxi siriguela caqui";
   int cont =0;

   while (frut[cont] != '\0')
   {
    cont++;
   }
   
   write (1,frut,cont+1);
   write(1,"\n",1);

   return(0);


}