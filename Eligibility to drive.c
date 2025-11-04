#include <stdio.h>

int main() {
    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    if (age >= 18)
        printf("Eligible to drive");
    else
        printf("Not eligible to drive");

    return 0;
}
