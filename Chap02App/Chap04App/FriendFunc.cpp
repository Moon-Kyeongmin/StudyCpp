#include <stdio.h>

class Date;
class Time {
	friend void OutToday(Date&, Time&);
private:
	int hour, min, sec;
public:
	Time(int h, int m, int s) :hour(h), min(m), sec(s){}

};

class Date {
	friend void OutToday(Date&, Time&);
private:
	int year, month, day;
public:
	Date(int y, int m, int d) {
		year = y;
		if (m >= 1 && m <= 12) { month = m; }
		if (d >= 1 && d <= 31) { day = d; }
	}
};

void OutToday(Date& d, Time& t) {
	printf("������ %d�� %d�� %d�� �̸� ���� �ð��� %d:%d:%d�Դϴ�.\n", d.year, d.month, d.day, t.hour, t.min, t.sec);
}

int main() {
	Time t(12, 5, 17);
	Date d(2020, 4, 22);
	OutToday(d, t);

	return 0;
}