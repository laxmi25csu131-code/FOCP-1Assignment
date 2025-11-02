#include<stdio.h>
int main(){
    int n , count = 0;
    printf("Enter the no of elements:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements in Array:");
    for(int i = 0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i = 0;i<n;i++){
        int prime = 1;
        if(a[i]<=1){
            prime = 0;
        }else{
          for(int j = 2;j*j<=a[i];j++){
                if(a[i]%j == 0){
                    prime = 0;
                    break;
                }
            }
        }
        if(prime){
            count++;
        }
    }
    printf("Total prime nos in array is:%d",count);
    return 0;
}