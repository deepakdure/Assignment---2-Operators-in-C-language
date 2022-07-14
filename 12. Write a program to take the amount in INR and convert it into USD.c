#include <stdio.h>
int main()
{
    float x, INR = 76.23;
    printf("enter amount in INR\n");
    scanf("%f", &x);
    printf("Total amount in USD = %f", x / INR);
    return 0;
}