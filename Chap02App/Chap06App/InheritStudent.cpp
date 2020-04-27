#include <stdio.h>
#include <string.h>

class Human {
protected:
	char name[12];
	int age;
public:
	Human() { ; }
	Human(const char* aname, int aage) {
		strcpy(name, aname);
		age = aage;
	}

	void intro() {
		printf("이름 %s, 나이 %d\n", name, age);
	}
};

class Student :public Human {
protected:
	int stunum;
public:
	Student(const char* aname, int aage, int astunum) {
		strcpy(name, aname);
		age = aage;
		stunum = astunum;
	}

	void study() {
		printf("책읽기");
	}

	void report() {
		printf("이름 %s, 나이 %d, 학번 %d 보고서 제출\n", name, age,stunum);
	}

	void intro() {
		Human::intro();
		printf("학번 : %d, 이름 : %s\n", stunum, name);
	}
};

class Graduate : public Student {
protected:
	char thesis[40];
public:
	Graduate(const char* aname, int aage, int astu,const char* athesis) : Student(aname, aage, astu) {
		strcpy(thesis, athesis);
	}
	void research() {
		printf("%s를 연구\n",thesis);
	}
};

class Boxer : public Human {
protected:
	int height, weight;
public:
	Boxer(const char* aname, int aage, int aheight, int aweight) {
		strcpy(name, aname);
		age = aage;
		height = aheight;
		weight = aweight;
	}

	void intro() {
		printf("키: %d, 몸무게: %d, 이름: %s\n", height, weight, name);
	}

	void fight() {
		puts("원펀치쓰리강냉이");
	}
};

int main() {
	Boxer b("복복복", 20, 180, 80);
	b.intro();
	b.fight();
}