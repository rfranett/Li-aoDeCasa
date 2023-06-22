#include <unistd.h>

int main(void)
{
  char obj[]="oculos brusa caderno sapatos livros";
  int cont =0;


  while (obj[cont] != '\0')
  {
    cont++;
  }
  
  write (1,obj,cont+1);
  write (1,"\n",1);
  return(0);

}