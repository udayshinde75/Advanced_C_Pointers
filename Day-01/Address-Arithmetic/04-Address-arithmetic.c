#include <stdio.h>

typedef struct A A;
typedef struct B B;
typedef struct C C;
struct A
{
    B* b;
};

struct B
{
    C* c;
};

struct C
{
    int a;
};

//Accessing member a of struct C using instance of struct A

int main()
{
    //Assigning values
    C instanceC;
    instanceC.a = 10;

    B instanceB;
    instanceB.c = &instanceC;

    A instanceA;
    instanceA.b = &instanceB;

    int valueOfA = instanceA.b->c->a;
    printf("Using -> Operator : %d\n", valueOfA);

    valueOfA = (*(*instanceA.b).c).a;
    printf("Using . Operator : %d\n", valueOfA);

    return 0;
}