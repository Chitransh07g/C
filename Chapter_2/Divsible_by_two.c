#include <stdio.h>

int main() {
    int a, b;

    printf("Enter first number \n");
    scanf("%d", &a);

    printf("Enter the second number \n");
    scanf("%d", &b);

    if (a % 2 == 0) {
        printf("%d is divisible by 2 \n", a);
    }
    else {
        printf("%d is not divisible by 2 \n", a);
    }

    if (b % 2 == 0) {
        printf("%d is divisible by 2 \n", b);
    }
    else {
        printf("%d is not divisible by 2 \n", b);
    }

    return 0;
}