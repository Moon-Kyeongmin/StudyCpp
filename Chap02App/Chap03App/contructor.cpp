#include <stdio.h>
#include <string.h>

class Human {
private:
	char name[12];
	int age;
public:
	Human(const char* name,int age) {
		strcpy(this->name, name);
		this->age = age;
	}
	void intro() {
		printf("이름 %s, 나이 %d\n", name, age);
	}
};

int main() {
	Human h = Human("문경민", 29);
	h.intro();
	return 0;
}