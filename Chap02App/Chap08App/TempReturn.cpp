#include <stdio.h>

template <typename T>
T max(T a, T b) {
	return (a > b) ? a : b;
}

template <typename T>
T cast(int s) {
	return (T)s;
}

int main() {
	int a = max(1, 2);
	double b = max(2.1, 1.1);
	double c = max(cast<double>(2), 3.14);

	printf("a %d, b %.1lf\n", a, b);
	return 0;
}