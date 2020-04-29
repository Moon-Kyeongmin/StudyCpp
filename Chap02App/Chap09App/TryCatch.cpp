#include <stdio.h>

int main() {
	int a, b;
	try
	{
		printf("a를 입력 ");
		scanf("%d", &a);
		if (a < 0)throw a;
		printf("b를 입력 ");
		scanf("%d", &b);
		if (b == 0)throw b;//throw "0으로 나눌수 없음";
		printf("나누기 결과 %d\n", a / b);

	}
	catch (int a)
	{
		printf("%d는 음수이므로 나눌수 없음\n", a);
	}
	catch (double b) {
		printf("~%f\n", b);
	}
	catch (const char* msg) {
		puts(msg);
	}
}