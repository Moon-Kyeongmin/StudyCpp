#include <stdio.h>

class Time {
private:
	int hour, min, sec;
public:
	Time() { ; }
	Time(int h, int m, int s) : hour(h), min(m), sec(s) { ; }
	const Time operator ++() {
		sec++;
		min += sec / 60;
		sec %= 60;
		hour += min / 60;
		min % 60;
		return *this;
	}
	const Time operator ++(int dummy) {
		Time t = *this;
		++* this;
		return t;
	}
	void OutTime() {
		printf("%d:%d:%d\n", hour, min, sec);
	}
};

int main() {
	Time t1(1, 1, 1);
	Time t2;
	t2 = ++t1;
	//t2 = t1++;
	t2.OutTime();
}