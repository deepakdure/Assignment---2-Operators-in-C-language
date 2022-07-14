#include <stdio.h>
int main()
{
    int n;
    printf("enter a number\n");
    scanf("%d", &n);
    printf("unit digit is %d", n % 10);
    return 0;
}