#include <stdio.h>
int main() {
    
    int a, b, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\nOriginal: a = %d, b = %d\n", a, 
        
    temp = a;
    a = b;
    b = temp;
    printf("After temp swap: a = %d, b = %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;
    printf("After arithmetic swap: a = %d, b = %d\n", a, b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("After XOR swap: a = %d, b = %d\n", a, b);

    int *p1 = &a, *p2 = &b, t;
    t = *p1;
    *p1 = *p2;
    *p2 = t;
    printf("After pointer swap: a = %d, b = %d\n", a, b);

    return 0;
}
