#include <stdio.h>

int main() {
	int a, b;
	try
	{
		printf("a�� �Է� ");
		scanf("%d", &a);
		if (a < 0)throw a;
		printf("b�� �Է� ");
		scanf("%d", &b);
		if (b == 0)throw b;//throw "0���� ������ ����";
		printf("������ ��� %d\n", a / b);

	}
	catch (int a)
	{
		printf("%d�� �����̹Ƿ� ������ ����\n", a);
	}
	catch (double b) {
		printf("~%f\n", b);
	}
	catch (const char* msg) {
		puts(msg);
	}
}