#include <stdio.h>

namespace UTIL {
	int value;
	double score;
	void sub() { puts("sub routine"); }
}

namespace VeryVeryLongLongNameSpaceNameInTheWorld {
	int value;
}

namespace MyCompany {
	namespace Research {
		namespace GameEngine {

		}
	}
}

int main() {
	namespace MRG = MyCompany::Research::GameEngine;
	namespace A = VeryVeryLongLongNameSpaceNameInTheWorld;
	using namespace UTIL;
	int value = 3;
	A::value = 2;
	UTIL::value = 4;
	UTIL::score = 1.234;
	UTIL::sub();

	return 0;
}

void mysub() {
	UTIL::value = 5;
}