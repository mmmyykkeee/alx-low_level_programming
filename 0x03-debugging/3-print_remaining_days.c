#include "main.h"
#include <stdio.h>

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
    int days_in_month[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    int i, days = 0;

    for (i = 1; i < month; i++) {
        days += days_in_month[i];
    }
    days += day;

    if (month > 2 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)) {
        days++;
    }

    if (days > 365 || (days == 365 && month != 12 && day != 31)) {
        printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
    } else {
        printf("Day of the year: %d\n", days);
        printf("Remaining days: %d\n", 366 - days);
    }
}

