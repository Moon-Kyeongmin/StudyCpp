#include <stdio.h>

class MyClass {
public:
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
				puts("�޸𸮺���");
				break;
			case 2:
				puts("��������ʰ�");
				break;
			case 3:
				puts("�ϵ�Ǯ");
				break;
			case 4:
				puts("����Ǯ");
				break;
			default:
				break;
			}
		}
	};

	void calc() {
		try {
			if (true) throw Exception(1);
		}
		catch (Exception& e) {
			printf("�����ڵ� = %d => ", e.GetErrorCode());
			e.ReportError();
		}
	}

	void calc2() throw (Exception) {
		if (true)throw Exception(2);
	}
};

int main() {
	MyClass m;
	m.calc();

	
	try {
		m.calc2();
	}
	catch(MyClass::Exception &e){
		printf("�����ڵ� = %d => ", e.GetErrorCode());
		e.ReportError();
	}
	return 0;
}