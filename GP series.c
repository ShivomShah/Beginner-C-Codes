#include <stdio.h>

int main() {
    int a, r, n;

    printf("Enter first term (a): ");
    scanf("%d", &a);

    printf("Enter common ratio (r): ");
    scanf("%d", &r);

    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    printf("GP Series: ");

    for(int i = 0; i < n; i++) {
        printf("%d ", a);
        a = a * r;   // next term
    }

    return 0;
}
