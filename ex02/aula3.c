#include <unistd.h>

void ser (char w)
{
    write(1,&w,1);

}
int main ()
{
    ser('R');
    ser('\n');
    return(0);
}
