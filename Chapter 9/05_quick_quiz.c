#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};

void show(struct employee e);

void show(struct employee e)
{
    printf("Code is %d\nSalary is %f\nName is %s\n", e.code, e.salary, e.name);
}

int main()
{
    struct employee e1, e2, e3;
    e1.code = 54;
    strcpy(e1.name, "Shahid");
    e1.salary = 4928.299;
    
    show(e1);
    return 0;
}