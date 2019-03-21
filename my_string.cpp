#include "my_string.h"
#include<cstring>
#include <iostream>
using namespace std;



my_string::my_string(const char* string = NULL)
{	
	if (!string) {
		this->value = new char;
		this->value[0] = 0;
	}
	this->length = strlen(string);
	
	
	this->value = new char[this->length + 1];
	size_t i = 0;
	for (; i < this->length; ++i) {
		this->value[i] = string[i];
		
	}
	this->value[i] = 0;
}
my_string::my_string(const my_string& str) {
	this->value = new char[str.length + 1];
	this->length = str.length;
	int i = 0;
	for (; i < str.length; ++i) {
		this->value[i] = str.value[i];
	}
	this->value[i] = 0;
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
ostream& operator << (ostream& output, const my_string& string) {
	output << string.value;
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
	my_string m3("1");
	delete[] m3.value;
	m3.value = new char[this->length + str.length + 1];
	m3.length = this->length + str.length;
	
	
	return m3;
}

my_string::~my_string()
{
	delete[] this->value;
}


