#include <stdio.h>

typedef struct employee
{
    int salary;
    float score;
}Emp;

int main()
{
    Emp e1;
    Emp* ptr = &e1;
    // (*ptr).salary = 56;
    // (*ptr).score = 45.3;
    ptr->salary = 56;
    ptr->score = 45.3;
    
    printf("The salary of employee is %d and score is %.2f\n", ptr->salary, ptr->score);

    return 0;
}