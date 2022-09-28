#include <stdio.h>

struct employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct employee e1;

    printf("Enter id, name and salary for the employee.");
    scanf("%d%s%f", &e1.id, &e1.name, &e1.salary);

    printf("Id=%d, Name=%s, Salary=%0.2f", e1.id, e1.name, e1.salary);

    return 0;
}