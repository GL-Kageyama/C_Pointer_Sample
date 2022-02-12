#include <stdio.h>

int main()
{
    // Create a variable and store the value
    int a, b, c;
    a = 1;
    b = 2;
    c = 3;

    // Output the contents of a variable
    printf("a=%d, b=%d, c=%d\n", a, b, c);

    // Output the address of the variable
    printf("a address is %p\n", &a);
    printf("b address is %p\n", &b);
    printf("c address is %p\n", &c);

    // Create a pointer
    int *a_pointer;
    int *b_pointer;
    int *c_pointer;

    // Store the address in the pointer
    a_pointer = &a;
    b_pointer = &b;
    c_pointer = &c;

    // Output the address of the pointer
    printf("a_pointer address is %p\n", a_pointer);
    printf("b_pointer address is %p\n", b_pointer);
    printf("c_pointer address is %p\n", c_pointer);

    // Store values in pointer
    *a_pointer = 100;
    *b_pointer = 200;
    *c_pointer = 300;

    // Outputting a,b,c variables, the values are changing
    printf("a=%d, b=%d, c=%d\n", a, b, c);
}

// ===================
//    Output Sample
// ===================
// ~ $ gcc Pointer.c 
// ~ $ ./a.out 
// a=1, b=2, c=3
// a address is 0x7ffeef898a4c
// b address is 0x7ffeef898a48
// c address is 0x7ffeef898a44
// a_pointer address is 0x7ffeef898a4c
// b_pointer address is 0x7ffeef898a48
// c_pointer address is 0x7ffeef898a44
// a=100, b=200, c=300
