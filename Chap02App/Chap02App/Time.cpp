#include <stdio.h>
#include "Time.h"

void Time::SetTime(int hour, int min, int sec) {
	this->hour = hour;
	this->min = min;
	this->sec = sec;
}

void Time::outTime() {
	printf("현재 시간은 %d:%d:%d 입니다.\n", hour, min, sec);
}