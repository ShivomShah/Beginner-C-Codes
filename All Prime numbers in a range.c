#include <stdio.h>

int main() {
    int start, end, i, j, isPrime;

    printf("Enter start of range: ");
    scanf("%d", &start);
    printf("Enter end of range: ");
    scanf("%d", &end);

    if (start > end) {
        printf("Invalid range\n");
        return 0;
    }

    if (start < 2) 
        start = 2;   // primes begin from 2

    printf("Prime numbers between %d and %d:\n", start, end);

    for (i = start; i <= end; i++) {
        isPrime = 1;   // assume prime

        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime)
            printf("%d ", i);
    }

    printf("\n");
    return 0;
}
