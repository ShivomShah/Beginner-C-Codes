#include <stdio.h>

int main() {
    int n;
    int sum = 0;

    printf("Enter value of N: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        sum = sum + (i * i);
    }

    printf("Sum of squares = %d", sum);

    return 0;
}
