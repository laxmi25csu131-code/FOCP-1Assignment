#include<math.h>
int main(){
    int n , ch,rem,res = 0,base = 1;
    printf("1.Binary to Decimal\n2.Decimal to Binary\nEnter the choice:");
    scanf("%d",&ch);
    if(ch == 1){
        printf("Enter the Decimal Number:");
        scanf("%d",&n);
         int temp = n;
        while(n>0){
            rem = n%2;
            res = res + rem*base;
            n /= 2;
            base *= 10;
        }
         printf("Decimal to Binary of %d is:%d",temp,res);
         return 0;
    }
    if(ch== 2){
        printf("Enter the Binary Number:");
        scanf("%d",&n);
        int temp = n;
        while(n>0){
            rem = n%10;
            res = res+rem*base;
            n /= 10;
            base *= 2;
        }
        printf("Binary to Decimal of %d is %d",temp,res);
        return 0;
    }
}