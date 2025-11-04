#include <stdio.h>
int main() {
    int choice;
    float volume, a, l, b, h, r;

    printf("1. Volume of Cube\n");
    printf("2. Volume of Cuboid\n");
    printf("3. Volume of Sphere\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter side length: ");
            scanf("%f", &a);
            volume = a * a * a;
            printf("Volume = %.2f\n", volume);
            break;

        case 2:
            printf("Enter length, breadth, height: ");
            scanf("%f %f %f", &l, &b, &h);
            volume = l * b * h;
            printf("Volume = %.2f\n", volume);
            break;

        case 3:
            printf("Enter radius: ");
            scanf("%f", &r);
            volume = (4.0 / 3.0) * 3.14 * r * r * r;
            printf("Volume = %.2f\n", volume);
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}
