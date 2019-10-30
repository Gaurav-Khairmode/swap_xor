#include <stdio.h>
int main()
{
    int a=12;
    int b=9;
    printf("Before conversion\na=%d\nb=%d\n",a,b);
    a^=b;
    b^=a;
    a^=b;
    printf("After conversion\na=%d\nb=%d\n",a,b);
    return 0;
}
