#ifndef H_DATE
#define H_DATE

class Date {
public:
    Date(int day=1, int month=1, int year=2022);
    int month() const;
    int day() const;
    int year() const;
    void updateMonth(int month);
    void updateDay(int day);
    void updateYear(int year);
	bool isDate(int month, int day, int year);
    Date operator+(int num_days) const;
private:
    int _month;
    int _day;
    int _year;
    int DaysInMonth(int month) const;

};


#endif //!H_DATE