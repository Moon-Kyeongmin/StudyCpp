#include <stdio.h>
#include <string.h>

class Date {
protected:
	int year, month, day;
public:
	Date(int y, int m, int d) : year(y), month(m), day(d) { ; }
	void OutDate() {
		printf("%d/%d/%d\n", year, month, day);
	}
};

class Product : private Date {
private:
	char name[64];
	char company[32];
	//Date validto;
	int price;
public:
	Product(const char* aname, const char* acompany, int y, int m, int d, int aprice) : Date(y, m, d) {
		strcpy(name, aname);
		strcpy(company, acompany);
		price = aprice;
	}
	void OutProduct() {
		printf("이름 : %s\n", name);
		printf("제조사 : %s\n", company);
		printf("유효기간 : ");
		OutDate();
		putchar('\n');
		printf("가격 : %d\n", price);
	}
};

int main() {
	Product p("새우깡", "농심", 2020, 4, 20, 1200);
	p.OutProduct();
	return 0;
}