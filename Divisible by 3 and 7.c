#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n % 3 == 0 && n % 7 == 0)
        printf("Divisible by both 3 and 7");
    else
        printf("Not divisible by both 3 and 7");

    return 0;
}
