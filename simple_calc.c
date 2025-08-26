//code for a simple calsulator which can add, subtract, multiply or divide according to the instructions
#include <stdio.h>
int main()
{
    float a, b;//variable declaration
    printf("Enter first operand: ");
    scanf("%f", &a);
    printf("Enter second operand: ");
    scanf("%f", &b);
    
    int n; //variable description
    printf("Enter 1 for addition, 2 for subtraction, 3 for multiplication, 4 for division :\n");
    scanf("%d", &n);
    
    switch (n)
    {
    case 1://for addition
    {
        printf("%.1f + %.1f = %.1f ", a, b, a + b);
        break;//to move compiler outside the switchcase
    }
    case 2://for subtraction
    {
        printf("%.1f - %.1f = %.1f", a, b, a - b);
        break;
    }
    case 3://for multiplication
    {
        printf("%.1f x %.1f = %.1f", a, b, a * b);
        break;
    }
    case 4://for division
    {
        printf("%.1f / %.1f = %.1f", a, b, a / b);
        break;
    }
    default:// for any other input by the user other than 1,2,3,4
    {
        printf("-x--x--x Wrong input x--x--x-");
        break;
    }
    }
    return 0;
}