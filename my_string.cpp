#include "my_string.h"
#include <iostream>
using namespace std;


void strcpy(char* out, char* in) {
	while (*in) {
		*out = *in;
		out++;
		in++;
	}
}
my_string::my_string(const char* string)
{	
	int strlen = 0;
	if (!string) {
		this->value = new char;
		this->value[0] = 0;
	}
	while (string[strlen])
		strlen ++;
	this->length = strlen;
	
	
	this->value = new char[strlen + 1];
	for (int i = 0; i < strlen; ++i) {
		this->value[i] = string[i];
		this->value[i + 1] = 0;
	}
}
int my_string::size() const{
	return this->length;
}
char& my_string::at(int index) const{
	return this->value[index];
}
char& my_string::operator[](int index) const{
	return this->value[index];
}
ostream& operator << (ostream& output,my_string& string) {
	for (int i = 0; i < string.size(); ++i) {
		cout << string[i];
	}
	return output;
}

bool my_string::operator ==(const my_string& str) {
	for (int i = 0; i < this->length; ++i) {
		if (this->value[i] != str.value[i]) {
			return false;
		}
	}
	return true;
}
my_string& my_string ::operator = (const my_string& str) {
	delete[] this->value;
	this->length = str.length;
	this->value = new char[this->length + 1];
	for (int i = 0; i < this->length; ++i) {
		this->value[i] = str.value[i];
	}
	return *this;
}
my_string my_string::operator + (const my_string& str) {
	my_string m3("");
	m3.value = new char[this->length + str.length + 1];
	int i = 0;
	return m3;
	
}
my_string::~my_string()
{
	delete[] this->value;
}

int main() {
	my_string str("123");
	str = "12321797412874918";
	str = str + "123";
	cout << str;
	system("pause");
	return 0;
}