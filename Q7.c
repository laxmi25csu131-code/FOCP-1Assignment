#include<stdio.h>
int main(){
    int n=5,i,j;
    for(i = 1;i<=n;i++){
     for(int j=1;j<=i;j++){
        printf("%d ",(j+1)%2);
     }
    for(int j=1;j<=2*(n-i);j++){
        printf("  ");
    }
    for(int j=1;j<=i;j++){
        printf("%d ",(j+1)%2);
    }
    printf("\n");
}
return 0;
}