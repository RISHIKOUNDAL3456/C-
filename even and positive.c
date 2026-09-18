#include <stdio.h>

int main(void)
{
    int x = 20;

    if (x > 0 && x % 2 == 0) {
        printf("Even and positive!");
    } else {
        printf("Try next time!");
    }

    return 0;
}