#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter two numbers\n");
    scanf("%d%d", &a, &b);
    c = a;
    a = b;
    b = c;
    printf("after swapping\na = %d, b = %d", a, b);
    return 0;
}