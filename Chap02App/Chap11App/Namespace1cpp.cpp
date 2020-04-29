#include <stdio.h>

namespace A {
	/*class MyClass {
	public:
		int value;
		MyClass() { ; }

		void OutTime() {
			printf("A");
		}
	};*/
	double value;
}

namespace B {
	int Value;
	void OutTime() {
		printf("B");
	}
}

int value;

int main() {
	A::value = 3.14;
	B::Value = 3;




	return 0;
}