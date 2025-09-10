#include <stdio.h>

int is_leap_year(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int day_of_year(int month, int day, int year) {
    int days_in_month[] = {31, 28, 31, 30, 31, 30,
                           31, 31, 30, 31, 30, 31};
    
    if (is_leap_year(year)) {
        days_in_month[1] = 29;
    }

    int day_of_year = 0;
    for (int i = 0; i < month - 1; i++) {
        day_of_year += days_in_month[i];
    }
    day_of_year += day;

    return day_of_year;
}