#include <unistd.h>

int main (void)
{
   char mar[]="lagosta tubarao peixe espada carangueijo marlin pepino do mar";
   int cont= 0;


   while(mar [cont] != '\0')
   {
    cont++;
   }

   write(1,mar,cont+1);
   write(1,"\n",1);
   
  return(0); 
}

