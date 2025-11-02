#include<stdio.h>
int main() {int n,ind,i,elem;
    printf("Enter number of elements: ");
    scanf("%d", &n); 
    int a[n],ch;   
    printf("Enter %d elements:", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);   
    }
    printf("\nenter your choice for deletion\n");
    printf("1. Delete at Front\n");
    printf("2. Delete at Middle\n");
    printf("3. Delete at End\n");
    printf("Enter your choice: ");
    scanf("%d", &ch);
printf("enter the element you want to delete");
scanf("%d",&elem);
switch(ch){
    case 1:
     for (i = 0; i < n - 1; i++) {
                a[i] = a[i + 1];
            }
            n--;
            printf("\nElement deleted from Front.\n");
            break;
    case 3:
            a[n] = elem;
            n++;
            printf("\nElement deleted at End.\n");
            break;
    case 2:
            ind = n/2;
            for (i = n; i > ind; i--) {
                a[i] = a[i - 1];
            }
            a[ind] = elem;
            n++;
            printf("\nElement deleted at Middle.\n");
            break;
    default:
            printf("\nInvalid choice.\n");
            return 0;
}
    printf("\narray after deletion\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
    
}