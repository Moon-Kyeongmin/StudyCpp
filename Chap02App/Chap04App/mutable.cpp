#include <stdio.h>

class Some
{
private:
	mutable int temp;

public:
	Some() { }
	void method() const { temp = 0; }
	void print() { printf("%d\n", temp); }
};

int main()
{
	Some s;
	s.method();
	s.print();

	const Some t;
	t.method();
}
