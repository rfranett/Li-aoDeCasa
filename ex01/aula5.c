#include <unistd.h>

void tes (char q)
{
    write(1,&q,1);

}

int main ()
{
    tes('r');
    tes('\n');
    return(0);
}