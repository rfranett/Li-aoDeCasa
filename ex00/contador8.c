#include <unistd.h>

int main(void)
{
    char mad []="peroba pauBrasil argelim cumaru ipeRosa curupixa cerejeira";
    int cont =0;

    while (mad[cont] != '\0')
    {
     cont++;
    }
    
    write(1,mad,cont+1);
    write(1,"\n",1);
    return(0);
}    