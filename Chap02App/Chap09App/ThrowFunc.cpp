#include <stdio.h>

void divide(int a,int b) {
	if (b == 0) throw "0���δ� ���� �Ұ�";
	printf("������ ��� %d\n", a / b);

}

int main() {
	try {
		divide(10, 0);
	}
	catch (const char* msg) {
		puts(msg);
	}

	return 0;
}