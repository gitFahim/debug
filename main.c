#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,remainder,z;
    printf("Enter first number: ");
    scanf("%d", &x);
    printf("Enter second number: ");

    scanf("%d", &y);
    z=(x/y) ;
    remainder = x%y;
    printf("The answer is: %d and remainder %d", z, remainder);
    return 0;
}
