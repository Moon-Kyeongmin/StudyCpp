#include <stdio.h>
#include "Date.h"

void Date::SetDate(int year, int month, int day) {
	this->year = year;
	this->month = month;
	this->day = day;
}

void Date::OutDate() {
	printf("������ %d�� %d�� %d�� �Դϴ�.\n", year, month, day);
}