#include <stdio.h>

int main() {
    float pmo,mmo,total;
    printf("Enter the marks obtained in Physics: ");
    scanf("%f", &pmo);
    printf("Enter the marks obtained in Mathematics: ");
    scanf("%f", &mmo);
    total = pmo + mmo;
    printf("Total: %f\n", total);
    return 0;
}