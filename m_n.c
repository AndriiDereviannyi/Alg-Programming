#include <stdio.h>
int main()
{
    float m, n, y;


    printf("Input n:\n");
    scanf("%f", &n);
    printf("Input m:\n");
    scanf("%f", &m);

    y=++n*m;
    printf("n++*m=%f\n", y);

    printf("n++<m=%i\n", ++n<m);

    printf("n-->m=%i\n", --n>m);

    printf("0=False; 1=True\n");
}