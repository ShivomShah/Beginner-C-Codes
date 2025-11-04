#include <stdio.h>
int main() {
    int choice, n, i, num, flag;

    while (1) {
        printf("--- Math Menu ---\n");
        printf("1. Factorial\n");
        printf("2. Fibonacci Series\n");
        printf("3. Prime Check\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 4) break;

        printf("Enter number: ");
        scanf("%d", &n);

        switch (choice) {
        case 1: { // Factorial
            long long fact = 1;
            for (i = 1; i <= n; i++)
                fact *= i;
            printf("Factorial = %lld\n", fact);
            break;
        }

        case 2: { // Fibonacci
            int a = 0, b = 1, c;
            printf("Fibonacci: ");
            for (i = 1; i <= n; i++) {
                printf("%d ", a);
                c = a + b;
                a = b;
                b = c;
            }
            printf("\n");
            break;
        }

        case 3: { // Prime check
            flag = 1;
            if (n <= 1) flag = 0;
            for (i = 2; i * i <= n; i++) {
                if (n % i == 0) {
                    flag = 0;
                    break;
                }
            }
            if (flag) printf("%d is Prime\n", n);
            else printf("%d is NOT Prime\n", n);
            break;
        }

        default:
            printf("Invalid choice!\n");
        }
    }
    return 0;
}
