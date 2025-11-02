#include<stdio.h>
int main(){
     int n;
   printf("\nEnter the size of Array:");
   scanf("%d",&n);
    int a[n];
    printf("\nEnter the elements in array:");
        for(int i = 0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("duplicate elements are:");
    int found=0;
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(a[i] == a[j]){
                printf("%d ",a[i]);
                found = 1;
                break;
            }
        }
    }
    if(!found){
        printf("-1");
    }
    return 0;
}