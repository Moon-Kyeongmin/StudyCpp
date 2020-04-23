#include <stdio.h>

enum Color {
	Black,
	White,
	Red,
	Green,
	Blue,
	Aqua
};

class Test {
private:
	Color mycol;
public:
	Test() {
		mycol = Color(5);
	}
	void OutColor() {
		printf("%d", mycol);
	}
};

int main() {
	Test t;
	t.OutColor();
	return 0;
}