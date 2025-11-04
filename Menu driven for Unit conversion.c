#include <stdio.h>

int main() {
    int c;
    float value;

    printf("1. Kilometer to Meter\n");
    printf("2. Meter to Centimeter\n");
    printf("3. Centimeter to Millimeter\n");
    printf("Enter your choice: ");
    scanf("%d", &c);

    printf("Enter value: ");
    scanf("%f", &value);

    switch(c) {
        case 1:
            printf("%.2f km = %.2f m\n", value, value * 1000);
            break;
        case 2:
            printf("%.2f m = %.2f cm\n", value, value * 100);
            break;
        case 3:
            printf("%.2f cm = %.2f mm\n", value, value * 10);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
