// Example of bitwise operators in C
#include <stdio.h>
int main ()
{
    int a = 5; // binary: 0101
    int b = 3; // binary: 0011

    printf("a & b = %d\n", a & b); // bitwise AND
    printf("a | b = %d\n", a | b); // bitwise OR
    printf("a ^ b = %d\n", a ^ b); // bitwise XOR
    printf("~a = %d\n", ~a);       // bitwise NOT
    printf("a << 1 = %d\n", a << 1); // left shift
    printf("a >> 1 = %d\n", a >> 1); // right shift

    return 0;
}