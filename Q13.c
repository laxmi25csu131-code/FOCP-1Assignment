#include <stdio.h>

int main() {
    int n, i;
    printf("Enter how many elements in array: ");
    scanf("%d", &n);

    int a[n]; 

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n; i++) {
        if(i == 0 && a[i] >= a[i + 1]) {
            printf("Peak element is %d at position %d\n", a[i], i + 1);
            break;
        }
        else if(i == n - 1 && a[i] >= a[i - 1]) {
            printf("Peak element is %d at position %d\n", a[i], i + 1);
            break;
        }
        else if(a[i] >= a[i - 1] && a[i] >= a[i + 1]) {
            printf("Peak element is %d at position %d\n", a[i], i + 1);
            break;
        }
    }

    return 0;
}
