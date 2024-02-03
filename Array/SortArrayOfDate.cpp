#include <iostream>
#include <algorithm>
using namespace std;

class Date
{
public:
    int day;
    int month;
    int year;
};

bool compare(const Date &date1, const Date &date2)
{
    if (date1.year < date2.year)
        return true;

    if (date1.month < date2.month && date1.year == date2.year)
        return true;

    if (date1.day < date2.day && date1.year == date2.year)
        return true;
    return false;
}

void sortDate(Date dates[], int n)
{
    sort(dates, dates + n, compare);
}

int main()
{
    Date dates[] = {
        {20, 1, 2014},
        {25, 3, 2010},
        {3, 12, 1676},
        {18, 11, 1982},
        {19, 4, 2015},
        {9, 7, 2015}};

    int sizeOfArray = sizeof(dates) / sizeof(dates[0]);

    sortDate(dates, sizeOfArray);

    for (int i = 0; i < sizeOfArray; i++)
    {
        cout << dates[i].day << "/" << dates[i].month << "/" << dates[i].year << endl;
    }

    return 0;
}