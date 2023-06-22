#include <unistd.h>

void test (char a)
{
    write(1,&a,1);

}
int main()
{
    test('R');
    test('\n');
    return(0);
}