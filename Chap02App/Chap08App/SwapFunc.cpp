#include <stdio.h>

class Util {
public:
	template <typename T>
	void Swap(T& a, T& b) {
		T t;
		t = a;
		a = b;
		b = t;
	}
};


//template<typename T>
//T add(T a, T b) {
//	return a + b;
//}

int main() {
	Util u;
	int a = 3, b = 4;
	double c = 1.2, d = 3.4;

	u.Swap(a, b);
	u.Swap(c, d);

	printf("%d %d\n%lf %lf\n", a, b, c, d);
	//printf("%d\n", add(a, b));
	return 0;
}