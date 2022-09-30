#include <stdlib.h>
#include <stdio.h>

typedef struct
{
    int day, month, year;
} Date;

void displayDate(Date *x)
{
    printf("%d/%d/%d\n", x->day, x->month, x->year);
}

int main()
{
    Date date;
    Date *p;

    p = &date;

    printf("Date: %p\tp: %p\n", &date, p);

    date.day = 29;
    date.month = 2;
    date.year = 2021;

    displayDate(p);

    printf("%d/%d/%d\n", date.day, date.month, date.year);

    return 0;
}