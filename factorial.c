#include <stdio.h>
int main(){
    int a,p=1;
    printf("Enter the nth integer: ");
    scanf("%d",&a);
    for(int i=a;i>0;i--)
    {
        p*=i;
    }
    printf("The product is: %d",p);
    return 0;
}