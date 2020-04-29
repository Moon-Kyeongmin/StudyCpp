#include <stdio.h>

int main() {
	const char* str = "Korea";
	int* pi;
	double d = 123.456;
	int i;
	i = static_cast<int>(d);
	//pi = static_cast<int*>(str);


	pi = (int*)str;
	printf("%d %x\n", *pi, *pi);
	

	return 0;
}