#pragma once

#include <iostream>
using namespace std;

class String
{
private:
	int size;
	char* bufferPtr;
public:
	String();
	String(const char*);
	String(const String&);
	String& operator = (const String&);
};


