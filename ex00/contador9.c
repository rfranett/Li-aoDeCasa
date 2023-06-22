#include <unistd.h>

int main(void)
{
    char salad[]="agriao alface scarola rabanete nabo tomate palmito ";
    int cont = 0;

    while (salad[cont] != '\0')
    {
        cont++;
    }
    
    write(1,salad,cont+1);
    write(1,"\n",1);
    return(0);

}