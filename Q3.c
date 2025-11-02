#include<stdio.h>
int main(){
    int a,b;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
    int sub = a + (~b+1);
    printf("Subtract of %d and %d is: %d",a,b,sub);
    return 0;
}