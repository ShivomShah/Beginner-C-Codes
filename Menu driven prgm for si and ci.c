#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    float p, r, t, si, ci;

    printf("1. Simple Interest\n");
    printf("2. Compound Interest\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter Principal (P): ");
    scanf("%f", &p);
    printf("Enter Rate (R): ");
    scanf("%f", &r);
    printf("Enter Time (T): ");
    scanf("%f", &t);

    switch(choice) {
        case 1:
            si = (p * r * t) / 100;
            printf("Simple Interest = %.2f\n", si);
            break;

        case 2:
            ci = p * pow((1 + r / 100), t) - p;
            printf("Compound Interest = %.2f\n", ci);
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}
