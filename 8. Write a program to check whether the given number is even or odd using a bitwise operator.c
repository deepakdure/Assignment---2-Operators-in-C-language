#include <stdio.h>
int main()
{
    int n, m;
    printf("enter a number\n");
    scanf("%d", &n);
    (n & 1 && printf("odd") || printf("even"));
    return 0;
}