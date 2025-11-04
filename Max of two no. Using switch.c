#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    switch(a > b) {
        case 1:
            printf("Maximum = %d\n", a);
            break;
        case 0:
            printf("Maximum = %d\n", b);
            break;
    }

    return 0;
}
