#include <stdio.h>

struct Date
{
    int DD;
    int MM;
    int YYYY;
};

int compare(struct Date d1, struct Date d2)
{
    if (d1.YYYY == d2.YYYY && d1.MM == d2.MM && d1.DD == d2.DD)
    {
        return 0;
    }
    if (d1.YYYY > d2.YYYY)
    {
        return 1;
    }
    else if (d1.YYYY < d2.YYYY)
    {
        return -1;
    }
    else if(d1.MM > d2.MM)
    {
        return 1;
    }
    else if(d1.MM < d2.MM)
    {
        return -1;
    }
    else if(d1.DD > d2.DD)
    {
        return 1;
    }
    else if(d1.DD < d2.DD)
    {
        return -1;
    }
    
}

int main()
{
    struct Date d1 = {12, 4, 2004};
    struct Date d2 = {11, 4, 2012};
    printf("%d", compare(d1, d2));

    return 0;
}