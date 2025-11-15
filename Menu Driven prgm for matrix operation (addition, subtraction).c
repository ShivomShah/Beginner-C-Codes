#include <stdio.h>
void readMatrix(int r, int c, int a[10][10]) {
    int i, j;
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
}
void printMatrix(int r, int c, int a[10][10]) {
    int i, j;
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}

void addMatrix(int r, int c, int a[10][10], int b[10][10]) {
    int i, j, res[10][10];
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            res[i][j] = a[i][j] + b[i][j];

    printf("Result (Addition):\n");
    printMatrix(r, c, res);
}

void subMatrix(int r, int c, int a[10][10], int b[10][10]) {
    int i, j, res[10][10];
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            res[i][j] = a[i][j] - b[i][j];

    printf("Result (Subtraction):\n");
    printMatrix(r, c, res);
}

int main() {
    int r, c, choice;
    int A[10][10], B[10][10];

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("\nMatrix A:\n");
    readMatrix(r, c, A);

    printf("\nMatrix B:\n");
    readMatrix(r, c, B);

    while (1) {
        printf("\nMENU\n");
        printf("1. Matrix Addition\n");
        printf("2. Matrix Subtraction\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addMatrix(r, c, A, B);
                break;
            case 2:
                subMatrix(r, c, A, B);
                break;
            case 3:
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
}
