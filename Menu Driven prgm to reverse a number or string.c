#include <stdio.h>

void reverseNumber() {
    int n, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0) {
        rev = rev * 10 + (n % 10);
        n = n / 10;
    }

    printf("Reversed number = %d\n", rev);
}

void reverseString() {
    char str[200];
    int i, len = 0;

    printf("Enter a string: ");
    getchar();
    fgets(str, sizeof(str), stdin);

    while (str[len] != '\0' && str[len] != '\n')
        len++;

    printf("Reversed string = ");
    for (i = len - 1; i >= 0; i--)
        putchar(str[i]);
    printf("\n");
}

int main() {
    int choice;

    while (1) {
        printf("\nMENU\n");
        printf("1. Reverse Number\n");
        printf("2. Reverse String\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                reverseNumber();
                break;
            case 2:
                reverseString();
                break;
            case 3:
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
}
