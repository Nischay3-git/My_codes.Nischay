#include <stdio.h>
int main()
{
    int a, n;
    printf("Enter the number you want to divide: ");
    scanf("%d", &n);
    printf("Enter the divisor: ");
    scanf("%d", &a);

    if (n % a == 0)
    {
        printf("Yes, %d is divisible by %d", n, a);
    }
    else
    {
        printf("No, %d is not divisible by %d", n, a);
    }
    return 0;
}