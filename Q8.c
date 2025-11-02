#include <stdio.h>

int main() {
    int n, first = 0, sec = 1, series, i;
    printf("Enter the number of terms ");
    scanf("%d", &n);

    printf("Fibonacci Series up to %d terms\n", n);

    for (i = 0; i < n; i++) {
        if (i == 0){
            series = first;}
        else if (i == 1){
            series = sec;}
        else {
            series = first + sec;
            first = sec;
            sec = series;
        }
        printf("%d ", series);
    }

    return 0;
}