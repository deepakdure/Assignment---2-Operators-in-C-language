#include <stdio.h>
int main()
{
    int a, b;
    printf("enter a three digits number\n");
    scanf("%d", &a);
    b = a / 100 + (a / 10) % 10 + a % 10;
    printf("sum of all three digits = %d", b);
    return 0;
}