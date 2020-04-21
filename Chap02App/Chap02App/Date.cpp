#include <stdio.h>
#include "Date.h"

void Date::SetDate(int year, int month, int day) {
	this->year = year;
	this->month = month;
	this->day = day;
}

void Date::OutDate() {
	printf("오늘은 %d년 %d월 %d일 입니다.\n", year, month, day);
}