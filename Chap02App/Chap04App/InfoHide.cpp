#include <stdio.h>

class Time {
private:
	int hour, min, sec;
public:
	Time(int hour, int min, int sec) {
		SetHour(hour);
		SetMin(min);
		SetSec(sec);
	}

	int GetHour() { return hour; }
	int GetMin() { return min; }
	int GetSec() { return sec; }
	
	void SetHour(int hour) {
		if (hour >= 0 && hour <= 24) this->hour = hour;
		else this->hour = 0;
	}
	void SetMin(int min) {
		if (min >= 0 && min < 60) this->min = min;
		else this->min = 0;
	}
	void SetSec(int sec) {
		if (sec >= 0 && sec < 60) this->sec = sec;
		else this->sec = 0;
	}
	void OutTime() {
		printf("현재 시간은 %d:%d:%d 입니다\n", hour, min, sec);
	}


};

int main() {
	Time now(14, 2, 24);
	now.OutTime();

	now.SetHour(26);
	now.OutTime();

	now.SetMin(10);
	now.OutTime();

	return 0;
}