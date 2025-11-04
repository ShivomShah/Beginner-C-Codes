#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter ages of three people: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
        printf("Person 1 is the oldest");
    else if (b > a && b > c)
        printf("Person 2 is the oldest");
    else if (c > a && c > b)
        printf("Person 3 is the oldest");
    else
        printf("Two or more people have the same age");

    return 0;
}
