#include <stdio.h>

int main() {
    int a, d, n;

    printf("Enter first term (a): ");
    scanf("%d", &a);

    printf("Enter common difference (d): ");
    scanf("%d", &d);

    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    printf("AP Series: ");

    for(int i = 0; i < n; i++) {
        printf("%d ", a);
        a = a + d;  
    }

    return 0;
}
