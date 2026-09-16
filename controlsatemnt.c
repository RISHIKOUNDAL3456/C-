#include <stdio.h>

int main()
{
    int x;

    printf("Enter a number of x: ");
    scanf("%d", &x);

    if (x > 0) {
        printf("x is positive\n");
        printf("always positive");
    } else if (x < 0) {
        printf("x is negative\n");
        printf("always negative");
    } else {
        printf("x is zero\n");
    }

    return 0;
}
