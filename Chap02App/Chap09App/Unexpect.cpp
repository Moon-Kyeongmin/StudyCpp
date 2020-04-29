#include <stdio.h>
#include <exception>
using namespace std;

void myunex() {
	puts("핵심 에러 발생");
	exit(-1);
}



void calc() throw(int) {
	throw "string";
}

int main() {
	set_terminate(myunex);
	try {
		calc();
	}
	catch (int) {
		puts("정수형 예외 발생");
	}
	puts("프로그램 종료");
	return 0;
}