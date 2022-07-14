#include <stdio.h>
int main()
{
    int a, b;
    printf("enter two numbwrs\n");
    scanf("%d%d", &a, &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("after swapping\na = %d, b = %d", a, b);
    return 0;
}