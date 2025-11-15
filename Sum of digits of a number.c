#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    while(n > 0) {
        sum += n % 10;   // take last digit
        n = n / 10;      // remove last digit
    }

    printf("Sum of digits = %d", sum);

    return 0;
}
