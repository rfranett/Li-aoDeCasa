#include <unistd.h>

int main(void)
{ char planet []="terra saturno jupter mercurio venus marte urano netuno";
  int cont = 0;

  while (planet [cont] != '\0')
  {
    cont++;
  }
  
  write(1,planet,cont+1);
  write(1,"\n",1);

    return(0);
}