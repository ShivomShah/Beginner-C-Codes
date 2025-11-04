#include <stdio.h>
int main() {
    int choice, n, i, j;

    while (1) {
        printf("--- Pattern Menu ---\n");
        printf("1. Square Pattern\n");
        printf("2. Right Angled Triangle\n");
        printf("3. Pyramid\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 4) break;

        printf("Enter size: ");
        scanf("%d", &n);

        switch (choice) {
        case 1: 
            for (i = 0; i < n; i++) {
                for (j = 0; j < n; j++)
                    printf("* ");
                printf("\n");
            }
            break;

        case 2: 
            for (i = 1; i <= n; i++) {
                for (j = 1; j <= i; j++)
                    printf("* ");
                printf("\n");
            }
            break;

        case 3:
            for (i = 1; i <= n; i++) {
                for (j = 1; j <= n - i; j++)
                    printf(" ");
                for (j = 1; j <= 2 * i - 1; j++)
                    printf("*");
                printf("\n");
            }
            break;

        default:
            printf("Invalid choice!\n");
        }
    }
    return 0;
}
