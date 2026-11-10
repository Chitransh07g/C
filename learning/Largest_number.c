
#include <stdio.h>

int main()
{
    int n1, n2, n3, great;

    printf("Enter three numbers one by one:\n");
    scanf("%d%d%d", &n1, &n2, &n3);

    great = n1;

    if (n2 > great) {
        great = n2;
    }

    if (n3 > great) {
        great = n3;
    }

    printf("The Greatest Number among three numbers is: %d\n", great);

    return 0;
}
