#include <stdio.h>
#include <string.h>

class Product {
private:
	char name[64];
	char company[32];
	int price;

	class Date {
	protected:
		int year, month, day;
	public:
		Date(int y, int m, int d) : year(y), month(m), day(d) { ; }
		void OutDate() {
			printf("%d/%d/%d\n", year, month, day);
		}
	};
	Date validto;
public:
	Product(const char* aname, const char* acompany, int y, int m, int d, int aprice) : validto(y, m, d) {
		strcpy(name, aname);
		strcpy(company, acompany);
		price = aprice;
	}
	void OutProduct() {
		printf("이름 : %s\n", name);
		printf("제조사 : %s\n", company);
		printf("유효기간 : ");
		validto.OutDate();
		putchar('\n');
		printf("가격 : %d\n", price);
	}
};

int main() {
	Product p("새우깡", "농심", 2020, 4, 20, 1200);
	p.OutProduct();

	return 0;
}