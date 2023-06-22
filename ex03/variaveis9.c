#include <stdio.h>

int main(void)
{
    int q = 50;
    int w = 100;
    int e = 200;
    int r = 300;
    char s ='$';

    int total1 = r+e;
    int total2 = w-q;
    int total3 = w*q;
    int total4 = w/q;

    printf("um dia eu ganhei %i%c depois acabei com %i%c mais antes eu estava com %i%c.\n",total1,s,total2,s,total3,s);
    printf("e amanhecendo o dia com %i%c depois pasando por %i%c no fim acabei com %i%c.\n",q,s,w,s,total4,s);
    return(0);
}