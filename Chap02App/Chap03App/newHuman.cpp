#include <stdio.h>
#include <string.h>

class Human {
private:
	char* name;
	int age;
public:
	Human(const char* name, int age) {
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
		this->age = age;
		printf("%s 객체생성자가 호출되었습니다.\n", this->name);
	}
	~Human() {
		printf("%s 객체가 파괴되었습니다.\n", this->name);
		delete[] this->name;
	}
	void intro() {
		printf("이름 %s, 나이 %d\n", name, age);
	}
};

int main() {
	Human boy("김수한무거북이와두루미", 12);
	boy.intro();

	Human* leo = new Human("레오나르도 디카프리오",22);
	leo->intro();
	delete leo;

	return 0;
}