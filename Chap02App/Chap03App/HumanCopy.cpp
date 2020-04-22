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
	}
	Human(const Human& other) {
		this->name = new char[strlen(other.name) + 1];
		strcpy(this->name, other.name);
		this->age = other.age;
	}
	~Human() {
		delete[] name;
	}

	void intro() {
		printf("이름 %s, 나이 %d\n", name, age);
	}
};

int main() {
	Human Kang("강감찬", 24);
	Human boy = Kang;
	boy.intro();
	return 0;
}