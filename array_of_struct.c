#include <stdio.h>

struct employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct employee e[5];
    int i = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Enter id, name and salary for employee:%d\n", i + 1);
        scanf("%d%s%f", &e[i].id, &e[i].name, &e[i].salary);
    }

    for (i = 0; i < 5; i++)
        printf("Id:%d, Name:%s, Salary:%f\n", e[i].id, e[i].name, e[i].salary);

    return 0;
}