#include <stdio.h>

int main() {
    int n, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("Number of digits = 1\n");
        return 0;
    }

    if (n < 0) {
        n = -n;   // make it positive
    }

    while (n > 0) {
        count++;
        n = n / 10;
    }

    printf("Number of digits = %d\n", count);
    return 0;
}
