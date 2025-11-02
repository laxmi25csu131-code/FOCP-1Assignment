#include <stdio.h>
int main() {
     int n,max,min;
    printf("Enter number of elements: ");
    scanf("%d", &n); 
    int a[n];   
    printf("Enter %d elements:", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);   
    }
max = a[0];
    min = a[0];
    for(int i = 1; i < n; i++) {
        if(a[i] > max) {
            max = a[i];
        }
        if(a[i] < min) {
            min = a[i];
        }
    }
    printf("\nMaximum element: %d", max);
    printf("\nMinimum element: %d", min);
    return 0;

}