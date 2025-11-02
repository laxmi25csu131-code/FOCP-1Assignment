#include<stdio.h>
int main() {
    int n;
    printf("Enter how many scores: ");
    scanf("%d", &n); 
    int a[n];   
    printf("Enter %d scores:", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);   
    }
for (int x=0; x<n; x++) {
    if (a[x]==99){
        printf("\nfirst occurrence of the score “99” in the array is at index: %d", x);
        return 0;
    }
   
}
}