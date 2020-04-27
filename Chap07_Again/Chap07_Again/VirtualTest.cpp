#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

class Human {
protected:
	char name[12];
	int age;
public:
	Human(const char* aname, int aage) {
		strcpy(name, aname);
		age = aage;
	}
	virtual void intro() {
		printf("%s %d\n", name, age);
	}
};

class Student : public Human {
protected:
	int stunum;
public:
	Student(const char* aname, int aage, int astunum) : Human(aname, aage), stunum(astunum) { ; }
	void intro() {
		printf("%d¹ø %s\n", stunum, name);
	}
};

int main() {
	Human h("¹®°æ¹Î", 29);
	Student s("±è±è±è", 30, 10);
	Human* pH;
	Student* pS;

	int sel = 0;
	cout << "¿øÇÏ´Â ¼ö¸¦ °í¸£¼¼¿ä(1:Human, 2:Student) ";
	

	while (1) {
		cin >> sel;
		if (sel == 1) {
			pH = &h;
		}
		else if (sel == 2) {
			pH = &s;
		}
		else {
			cout << "error" << endl;
			exit(-1);
		}
		pH->intro();
	}
	
}