#include "calendar.h"

int days_in_year(int year) {
    bool leap = (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
    return leap ? 366 : 365;
}
