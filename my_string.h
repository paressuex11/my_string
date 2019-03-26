#pragma once
#include <iostream>

class my_string
{
private:
	char* value;            
public:
	int size ()const;
	char& at(int index)const;
	char& operator[] (int index)const;
	bool operator ==(const my_string& str);

	my_string& operator =(const my_string& str);
	my_string& operator+=(const my_string& str);
	my_string operator + (const my_string& str);

	int compare(const my_string& str);
	my_string substr(int start)const;
	my_string substr(int start, int length)const;
	int find(const my_string& str, int start = 0);
	void replace(int start, int length, const my_string& str);
	void erase(int start, int length);
	void insert(int index, const my_string &str);

	my_string(const char * string);

	~my_string();
	my_string(const my_string& str);
	friend std::ostream& operator << (std::ostream& output, const my_string& string);
	
};

std::ostream& operator << (std::ostream& output, const my_string& string);
std::istream& operator >> (std::istream& input, my_string& string);