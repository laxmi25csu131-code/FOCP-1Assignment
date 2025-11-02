#include<stdio.h>
#include<math.h>
int main()
{
    int no,rem,rev,arm=0,temp,c;
    printf("Enter a number: ");
    scanf("%d",&no);
    printf("enter the count of digits: ");
    scanf("%d",&c);
    temp=no;
    while(no>0)
    {
        rem=no%10;
        rev=rev*10+rem;
        no=no/10;
    }
    arm+=ceil(pow(rem,c));
    if(temp==rev)
        printf("The number is an armstrong number");
    else
        printf("The number is an armstrong number");
        return 0;
}
    

