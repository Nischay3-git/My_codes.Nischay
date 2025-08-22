#include <stdio.h>
int main(){
    int n, sum=0;
    printf("Enter the nth Natural number: ");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++)
    {
        sum+= i;
    }
    printf("The sum is: %d", sum);
    
    // using formula for sum of n Natural numbers= (n(n+1))/2
    int a, s=0;
    printf("\nEnter the nth Natural number:");
    scanf("%d",&a);
    s=(a*(a+1))/2;
    printf("\nThe sum is: %d", s);
    
    return 0;
    
}