#include <stdio.h>
int main()
{
    int n;
    printf("enter a number\n");
    scanf("%d", &n);
    printf("after last digit zero the number is %d", (n / 10) * 10);
    return 0;
}