#include <stdio.h>

enum E_Error { OUTOFMEMORY, OVERRANGE, HARDFULL, STACKFULL };

class Exception {
private:
	int ErrorCode;
public:
	Exception(int ae) : ErrorCode(ae) { ; }
	int GetErrorCode() { return ErrorCode; }
	void ReportError() {
		switch (ErrorCode)
		{
		case 1:
			puts("메모리부족");
			break;
		case 2:
			puts("연산범위초과");
			break;
		case 3:
			puts("하드풀");
			break;
		case 4:
			puts("스택풀");
			break;
		default:
			break;
		}
	}
};

void report() {
	if (true) throw Exception(2);
}

int main() {
	try {
		report();
		puts("작업완료");
	}
	catch (Exception& e) {
		printf("에러코드 = %d", e.GetErrorCode());
	}
	return 0;
}