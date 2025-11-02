#include<stdio.h>
int main() {
    int n;
    int even_array[n];
    int odd_array[n];
    int e_count = 0, o_count = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n); 
    int a[n];   
    printf("Enter %d elements:", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);   
    }
    printf("The entered elements are: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);   
    }
    for(int i = 0; i < n; i++) {
        if(a[i] % 2 == 0) {
            even_array[e_count] = a[i];
            e_count++;
        } else {
            odd_array[o_count] = a[i];
            o_count++;
        }
    }
    printf("\nEven_array is: ");
    for(int i = 0; i < e_count; i++) {
        printf("%d ", even_array[i]);
    }
    printf("\nOdd_array is: ");
    for(int i = 0; i < o_count; i++) {
        printf("%d ", odd_array[i]);
    }
    return 0;
}
