#include <stdio.h>
#include<math.h>

int main() {
    int n, original, sum = 0, rem,t;
    printf("Enter How many digit no. u want to check: ");
    scanf("%d",&t);
    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n > 0) {
        rem = n % 10;
        sum += pow(rem,t);
        n /= 10;
    }

    if (sum == original)
        printf("Armstrong number");
    else
        printf("Not an Armstrong number");

    return 0;
}
