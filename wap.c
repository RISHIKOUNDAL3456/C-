#include<stdio.h>
int main()
{
    int a,b, temp=0;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Before swapping the value of a is : a = %d, b = %d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping the value of a is : a = %d, b = %d", a, b);

    return 0;
}