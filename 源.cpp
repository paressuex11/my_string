#include"my_string.h"
#include <iostream>
using namespace std;

int main() {
	my_string str("123");
	my_string strr = str;
	strr = str;
	cout << str;
	str.~my_string();
	/*str + strr;*/
	system("pause");
	return 0;
}