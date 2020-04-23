#include <stdio.h>

class Date;
class Time {
	friend class Date;
private:
	int hour, min, sec;
public:
	Time(int h, int m, int s) :hour(h), min(m), sec(s) {}

};

class Date {
private:
	int year, month, day;
public:
	Date(int y, int m, int d) {
		year = y;
		if (m >= 1 && m <= 12) { month = m; }
		if (d >= 1 && d <= 31) { day = d; }
	}
	void OutToday(Time& t) {
		printf("오늘은 %d년 %d월 %d일 이며 지금 시간은 %d:%d:%d입니다.\n", year, month, day, t.hour, t.min, t.sec);
	}
};



int main() {
	Time t(12, 5, 17);
	Date d(2020, 4, 22);
	d.OutToday(t);

	return 0;
}