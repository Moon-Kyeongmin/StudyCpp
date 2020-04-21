#include <stdio.h>
#include "Time.h"
#include "Date.h"


int main() {
	Time now;
	Date today;

	now.SetTime(23, 55, 10);
	now.outTime();
	today.SetDate(2020, 4, 21);
	today.OutDate();

	printf("%d %d\n", sizeof(now), sizeof(today));
	return 0;
}