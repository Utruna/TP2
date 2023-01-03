#include "date.h"
#include "assert.h"
#include <iostream>

Date::Date(int day, int month, int year) :
_month(month),_day(day),_year(year) {
    bool status = isDate(day,month,year);
    assert(status && "date is not valid");
}

void Date::updateMonth(int month) {
    _month = month;
}

void Date::updateDay(int day) {
    _day = day;
}

void Date::updateYear(int year) {
	_year = year;
}

int Date::day() const {
	return _day;
}

int Date::month() const {
	return _month;
}

int Date::year() const {
	return _year;
}
Date Date::operator+(int num_days) const {
  Date result(*this);
  result._day += num_days;
  while (result._day > DaysInMonth(result._month)) {
    result._day -= DaysInMonth(result._month);
    ++result._month;
    if (result._month > 12) {
      result._month = 1;
      ++ result._year;
    }
  }

  return result;
}

int Date::DaysInMonth(int month) const {
  const int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  return days_in_month[month - 1];
}
bool Date::isDate(int day, int month, int year) {
    if ((day <  0) || (day > 32)) return false;
    if ((month < 0) || (month > 13)) return false;
    if ((month == 2) && (day > 29)) return false;
    if (((month == 4) || (month == 6) || (month == 9) || (month == 11)) && (day > 31)) return false;
    if ((year < 1500) && (year > 2050)) return false;
    return true;
}

