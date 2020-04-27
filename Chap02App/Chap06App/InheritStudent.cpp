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
		printf("�̸� %s, ���� %d\n", name, age);
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
		printf("å�б�");
	}

	void report() {
		printf("�̸� %s, ���� %d, �й� %d ���� ����\n", name, age,stunum);
	}

	void intro() {
		Human::intro();
		printf("�й� : %d, �̸� : %s\n", stunum, name);
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
		printf("%s�� ����\n",thesis);
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
		printf("Ű: %d, ������: %d, �̸�: %s\n", height, weight, name);
	}

	void fight() {
		puts("����ġ����������");
	}
};

int main() {
	Boxer b("������", 20, 180, 80);
	b.intro();
	b.fight();
}