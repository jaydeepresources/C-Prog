#include <stdio.h>

void recursion()
{
    printf("Hi..");
    recursion();
}

int main()
{
    recursion();
    return 0;
}