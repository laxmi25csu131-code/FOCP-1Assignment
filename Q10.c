#include<stdio.h>
int main() {
    int n;
    int count = 0;
    // int temp;
    printf("Enter how many scores: ");
    scanf("%d", &n); 
    int a[n];   
    printf("Enter %d scores:", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);   
    }
for (int x=0; x<n; x++) {
    if (a[x]==99){
        count++;
        printf("\nthe person who scored 99 is at index: %d\n", x);

    }
   
}
 printf("\n%d people scored 99\n",count);
}