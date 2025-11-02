#include<stdio.h>
int main()
{
    int i,a,b,min,hcf;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    if (a < b)
    min = a;
    else{
        min =b;
    }
    for (i=1;i<=min;i++)
    {
        if (a%i==0 && b%i==0)
        {
            hcf=i;
        }
    }printf("the hcf of %d and %d is %d",a,b,hcf);
    return 0;
}