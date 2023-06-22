#include <unistd.h>

void print (char e)
{
  write(1,&e,1);
}

int main()
{
    print('R');
    print('\n');
    return(0);
}