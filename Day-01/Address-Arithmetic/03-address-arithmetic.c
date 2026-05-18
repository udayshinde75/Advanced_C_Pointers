#include <stdio.h>

struct A
{
    int x;
    int y;
    int z;
};

struct B
{
    double x;
    int y;
    double z;
};

int main(void)
{
    struct A instanceA;
    struct B instanceB;

    puts("Start -------");

    printf("Base address of instanceA : %llu\n", &instanceA);
    printf("Address of member y in instanceA : %llu\n", &instanceA.y);

    printf("Base address of instanceB : %llu\n", &instanceB);
    printf("Address of member y in instanceB : %llu\n", &instanceB.y);
    printf("Address of member z in instanceB : %llu\n", &instanceB.z);
    puts("End -------");

    return 0;
}


/*
Output :
Start -------
Base address of instanceA : 6101725168
Address of member y in instanceA : 6101725172
Base address of instanceB : 6101725144
Address of member y in instanceB : 6101725152
Address of member z in instanceB : 6101725160
End -------
*/ 