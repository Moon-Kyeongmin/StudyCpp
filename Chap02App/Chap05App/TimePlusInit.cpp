#include <stdio.h>

class Time {
private:
	int hour, min, sec;
public:
	Time() { ; }
	Time(int h, int m, int s) : hour(h), min(m), sec(s) { ; }
	void OutTime() {
		printf("%d:%d:%d\n", hour, min, sec);
	}
	const Time operator +(int s) const {
		Time t = *this;
		t.sec += s;

		t.min += t.sec / 60;
		t.sec %= 60;
		t.hour += t.min / 60;
		t.min %= 60;
		return t;
	}
	

	const Time operator +(const Time& other) {
		Time t;
		t.sec = sec + other.sec;
		t.min = min + other.min;
		t.hour = hour + other.hour;

		t.min += t.sec / 60;
		t.sec %= 60;
		t.hour += t.min / 60;
		t.min %= 60;

		return t;
	}

	const Time operator *(const int s) const {
		Time t = *this;
		int tsec = t.hour * 3600 + t.min * 360 + t.sec * 60;
		tsec *= s;
		t.hour = tsec / 3600;
		t.min = (tsec / 60) % 60;
		t.sec = tsec % 60;
		return t;
	}

};
const Time operator +(int s, Time& me) {
	return (me + s);
}
const Time operator *(int s, Time& me) {
	return (me * s);
}



int main() {
	Time t1(1, 40, 32), t2(2, 21, 33);
	Time t3;

	Time test(3, 0, 0);
	test.OutTime();
	test = test * 2;
	test.OutTime();
	t3 = t1 + t2;
	t3.OutTime();

	t3 = t3 + 200;
	t3.OutTime();

	t3 = 200 + t3;
	t3.OutTime();
	t3 = t3 * 2;
	t3.OutTime();
}