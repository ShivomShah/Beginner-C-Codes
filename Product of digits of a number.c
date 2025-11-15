#include <stdio.h>

int main() {
    int n, prod = 1;

    printf("Enter number: ");
    scanf("%d", &n);

    while(n > 0) {
        prod *= (n % 10);   // multiply last digit
        n = n / 10;         // remove last digit
    }

    printf("Product of digits = %d", prod);

    return 0;
}
