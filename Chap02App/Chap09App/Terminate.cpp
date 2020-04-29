#include <stdio.h>
#include <exception>


void myterm() {
	puts("예외발생");
	exit(-1);
}

int main() {
	set_terminate(myterm);
	try {
		throw 1;
	}
	/*catch (char* m) {
		puts(m);
	}*/
	catch (int a) {
		printf("%d\n", a);
	}
}