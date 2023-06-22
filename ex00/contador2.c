#include <unistd.h>

int main(void)
{char alf []="abcdefghijklmnopqrstuvwxyz";
int cont =0;

while (alf[cont] != '\0')
{
    cont++;
}
write(1,alf,cont+1);
write(1,"\n",1);

    return(0);
}