#include <stdio.h>

int countVowels(char *s) {
    int c = 0;
    while (*s) {
        char ch = *s;

        // Convert uppercase to lowercase manually
        if (ch >= 'A' && ch <= 'Z')
            ch = ch + 32;

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            c++;

        s++;
    }
    return c;
}

int countConsonants(char *s) {
    int c = 0;
    while (*s) {
        char ch = *s;
        if (ch >= 'A' && ch <= 'Z')
            ch = ch + 32;

        if ((ch >= 'a' && ch <= 'z') &&
            !(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'))
            c++;

        s++;
    }
    return c;
}

int countDigits(char *s) {
    int c = 0;
    while (*s) {
        if (*s >= '0' && *s <= '9')
            c++;
        s++;
    }
    return c;
}

int main() {
    char str[200];
    int choice;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (1) {
        printf("\nMENU\n");
        printf("1. Count Vowels\n");
        printf("2. Count Consonants\n");
        printf("3. Count Digits\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Vowels = %d\n", countVowels(str));
                break;
            case 2:
                printf("Consonants = %d\n", countConsonants(str));
                break;
            case 3:
                printf("Digits = %d\n", countDigits(str));
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
}
