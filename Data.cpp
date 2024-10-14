#include <iostream>
#include <cmath>
struct data {
    int day, month, year;
    void set(int a_day, int a_month, int a_year) {
        day = a_day; month = a_month; year = a_year;
    }
    int nof() {
        //day = day + (((30 * (month - 1)) + (31 * (month + 1))) + (366 * (year / 4)));
        if (month % 2 == 0 && year % 4 == 0) {
            return day = (day + (((30 * (month / 2)) + (31 * (month / 2 - 1))) + (365 * year))) + ((year / 4) * 1);
        }
        else if (month % 2 == 1 && year % 4 == 0) {
            return day = day + (((30 * (month / 2 - 1)) + (31 * (month / 2+1))) + (365 * year)) + ((year / 4) * 1);
        }
        else if (month % 2 == 0 && year % 4 != 0) {
            return day = (day + (((30 * (month / 2)) + (31 * (month / 2 - 1))) + (365 * year))) + (((year / 4) - 1) * 1);
        }
        else if (month % 2 == 1 && year % 4 != 0) {
            return day = (day + (((30 * (month / 2 - 1)) + (31 * (month / 2 +1))) + (365 * year))) + (((year / 4) - 1) * 1);
        }
    }
};

int main()
{
    data date1, date2;
    int days, days1, days2, firstday, firstmonth, firstyear, secondday, secondmonth, secondyear;
    std::cout << "Enter the day: ";
    std::cin >> firstday;
    std::cout << "Enter the month: ";
    std::cin >> firstmonth;
    std::cout << "Enter the year: ";
    std::cin >> firstyear;
    std::cout << "Enter the day: ";
    std::cin >> secondday;
    std::cout << "Enter the month: ";
    std::cin >> secondmonth;
    std::cout << "Enter the year: ";
    std::cin >> secondyear;
    date1.set(firstday, firstmonth, firstyear);
    date2.set(secondday, secondmonth, secondyear);
    days1 = date1.nof();
    days2 = date2.nof();
    days = days1 - days2;
    if (days < 0) {std::cout << fabs(days);}
    else { std::cout << days; }
}
