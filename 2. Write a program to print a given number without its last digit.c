#include <stdio.h>
int main()
{
    int x;
    printf("enter a number\n");
    scanf("%d", &x);
    printf("Without it's last digit is - %d", x / 10);
    return 0;
}