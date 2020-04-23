#include <stdio.h>

#define MYSQLUSER "root"
#define MYSQLPASSWORD "mysql_p@ssw0rd"
#define MYSQLIP "127.0.0.1"

class DBQuery {
private:
	static int hCon;
	int nResult;
public:
	DBQuery() {};
	static void DBConnect(const char* Server,const char* ID, const char* pass);
	static void DBDisConnect();
	bool RunQuery(const char* SQL);
};

int DBQuery::hCon;
void DBQuery::DBConnect(const char* Server,const char* ID, const char* pass) {
	hCon = 1234;
	puts("연결성공");
}
void DBQuery::DBDisConnect() {
	hCon = NULL;
	puts("연결해제");
}

bool DBQuery::RunQuery(const char* SQL) {
	puts(SQL);
	return true;
}

int main() {
	DBQuery::DBConnect(MYSQLIP, MYSQLUSER, MYSQLPASSWORD);
	DBQuery con1, con2, con3;
	con1.RunQuery("SELECT * FROM usertbl WHERE userID='KBS';");
	DBQuery::DBDisConnect();

	return 0;
}