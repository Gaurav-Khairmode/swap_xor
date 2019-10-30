#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter the data of a and b\n");
    scanf("%d\n%d\n",a,b);
    printf("Before conversion\na=%d\nb=%d\n",a,b);
    a^=b;
    b^=a;
    a^=b;
    printf("After conversion\na=%d\nb=%d\n",a,b);
    return 0;
}
