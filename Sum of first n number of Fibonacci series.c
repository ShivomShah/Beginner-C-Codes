#include <stdio.h>

int main() {
    int n, i;
    long long a = 0, b = 1, next;
    long long sum = 0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input");
        return 0;
    }

    for (i = 1; i <= n; i++) {
        sum += a;          // add current Fibonacci number
        next = a + b;      // generate next term
        a = b;
        b = next;
    }

    printf("Sum of first %d Fibonacci numbers = %lld\n", n, sum);

    return 0;
}
