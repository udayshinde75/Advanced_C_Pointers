#include <stdio.h>

int main()
{
    // a is array of 5 integers.
    int a[5] = {100, 200, 300, 400, 500};   

    // pa is pointer to array of 5 integers
    int (*pa)[5];

    pa = &a;

    int i;
    int current_element;

    for ( i = 0; i < 5; ++i)
    {
        current_element = (*pa)[i];
        printf("Element at index %d is %d\n", i, current_element);
    }
    return 0;
}