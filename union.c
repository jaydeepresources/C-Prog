#include <stdio.h>

union code
{
    int c1;
    char c2[10];
    float c3;
    char c4;
};

int main()
{
    union code a;

    printf("Enter code in int format");
    scanf("%d", &a.c1);

    printf("Code=%d", a.c1);

    return 0;
}