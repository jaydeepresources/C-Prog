#include <stdio.h>

void swap(int *, int *);

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;

    printf("From Swap\n");
    printf("a=%d, b=%d\n", *a, *b);
}

int main()
{

    int a = 10, b = 20;

    swap(&a, &b);

    printf("From Main\n");
    printf("a=%d, b=%d\n", a, b);

    return 0;
}
