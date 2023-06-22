#include <unistd.h>

int main()
{
  char alf[]="ABCDEFGHIJKLMNOPQRSTUVWZXZ";
  int contador = 0;

  while (alf[contador] != '\0')
  {
    contador++;
  }
 write(1,alf,contador+1);
 write(1,"\n",1);

 return(0);

}
