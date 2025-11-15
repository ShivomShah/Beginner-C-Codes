#include <stdio.h>
void readArray(int a[], int n) {
    int i;
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
}

void sumArray(int a[], int n) {
    int i, sum = 0;
    for (i = 0; i < n; i++)
        sum += a[i];

    printf("Sum = %d\n", sum);
}

void maxArray(int a[], int n) {
    int i, max = a[0];
    for (i = 1; i < n; i++)
        if (a[i] > max)
            max = a[i];

    printf("Maximum = %d\n", max);
}

void minArray(int a[], int n) {
    int i, min = a[0];
    for (i = 1; i < n; i++)
        if (a[i] < min)
            min = a[i];

    printf("Minimum = %d\n", min);
}

int main() {
    int a[100], n, choice;

    printf("Enter size of array: ");
    scanf("%d", &n);

    readArray(a, n);

    while (1) {
        printf("\nMENU\n");
        printf("1. Sum of Elements\n");
        printf("2. Maximum Element\n");
        printf("3. Minimum Element\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                sumArray(a, n);
                break;
            case 2:
                maxArray(a, n);
                break;
            case 3:
                minArray(a, n);
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
}
