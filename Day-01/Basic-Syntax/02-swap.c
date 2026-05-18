#include <stdio.h>

void swap_1(int x, int y);
void swap_2(int* px, int* py);

void test_swap_1(void);
void test_swap_2(void);
 
int main(void)
{
    test_swap_1();
    test_swap_2();

    return 0;

}

void swap_1(int x, int y)
{
    int temp;

    printf("without ptr before swap : x = %d, y = %d\n", x, y);
    temp = x;
    x = y;
    y = temp;
    printf("without ptr after swap : x = %d, y = %d\n", x, y);
}

void swap_2(int* px, int*py)
{
    printf("with ptr before swap : x = %d, y = %d\n", *px, *py);

    int temp = *px;
    *px = *py;
    *py = temp;

    printf("with ptr after swap : x = %d, y = %d\n", *px, *py);
}

void test_swap_1()
{
    puts("Testing swap 1\n");
    int x = 100, y = 200;
    swap_1(x, y);
}

void test_swap_2()
{
    puts("Testing swap 2\n");
    int x = 100, y = 200;
    swap_2(&x, &y);
}