#include<unistd.h>

int main(void)
{
    char anim[]="gato cachorro pato marreco galinha";
     int cont = 0;


while(anim[cont] != '\0')
{
    cont++;
}
write(1,anim,cont+1);
write(1,"\n",1);

return(0);
}