#include <stdio.h>
#include <exception>
using namespace std;

void myunex() {
	puts("�ٽ� ���� �߻�");
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
		puts("������ ���� �߻�");
	}
	puts("���α׷� ����");
	return 0;
}