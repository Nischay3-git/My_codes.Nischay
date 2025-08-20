//this solves addition and subtraction between teo integers using switchcase
#include <stdio.h>
int main()
{   int a, b, n;

    printf("Enter integer A: ");
    scanf("%d", &a);
    printf("Enter integer B: ");
    scanf("%d", &b);

    printf("enter 1 for addition, 2 for subtraction\n");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        printf("Their addition is: %d", a + b);
        break;
    case 2:
        printf("Their subtraction is: %d", a - b);
        break;
    }

    return 0;
}