#include <stdio.h>
#include "Time.h"

void Time::SetTime(int hour, int min, int sec) {
	this->hour = hour;
	this->min = min;
	this->sec = sec;
}

void Time::outTime() {
	printf("���� �ð��� %d:%d:%d �Դϴ�.\n", hour, min, sec);
}