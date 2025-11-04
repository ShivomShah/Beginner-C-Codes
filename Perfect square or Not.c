#include <stdio.h>
#include <math.h>
int main() {
    int n, root;
    printf("Enter a number: ");
    scanf("%d", &n);

    root = sqrt(n);

    if (root * root == n)
        printf("Perfect square");
    else
        printf("Not a perfect square");

    return 0;
}
