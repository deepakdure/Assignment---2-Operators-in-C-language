#include <stdio.h>
int main()
{
    int x, y, z;
    printf("enter a three digits number\n");
    scanf("%d", &x);
    y = x % 10;
    x = x / 10;
    z = 100 * y + x;
    printf("After rotating one position toward right\n%d", z);
    return 0;
}