#include"my_string.h"
#include<cstring>
#define _CRT_SECURE_NO_DEPRECATE
my_string::my_string() {
	this->value = new char[1];
	this->value[0] = 0;
}
