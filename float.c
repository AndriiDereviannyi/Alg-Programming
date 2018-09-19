#include <stdio.h>
int main(void)
{
    float a, b, x, y, z;
    a=100;
    b=0.001;
    x=((a-b)*(a-b)*(a-b)*(a-b))-(a*a*a*a-4*a*a*a*b);
    y=(6*a*a*b*b)-(4*a*b*b*b)+(b*b*b*b);
    z=x/y;

    printf("z=%f\n",z);
}