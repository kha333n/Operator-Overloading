#include "String.h"

String::String()
{
	size = 0;
	bufferPtr = NULL;
}

String::String(const char* ptr)
{
	if (ptr != NULL)
	{
		size = strlen(ptr);
		bufferPtr = new char[size + 1];
		strcpy_s(bufferPtr,(size + 1), ptr);
	}
	else
	{
		bufferPtr = NULL;
		size = 0;
	}
}

String::String(const String& rhs)
{
	this->size = rhs.size;
	// ReSharper disable CppObjectMemberMightNotBeInitialized
	delete[] this->bufferPtr;
	// ReSharper restore CppObjectMemberMightNotBeInitialized
	if (rhs.size != 0)
	{
		this->bufferPtr = new char[rhs.size + 1];
		strcpy_s(this->bufferPtr, rhs.size + 1, rhs.bufferPtr);
	}
	else
	{
		this->bufferPtr = NULL;
	}
}

String& String::operator=(const String& rhs)
{
	if (this != &rhs)
	{
		this->size = rhs.size;
		delete[] this->bufferPtr;
		if (rhs.bufferPtr != NULL)
		{
			this->bufferPtr = new char[rhs.size + 1];
			strcpy_s(this->bufferPtr,rhs.size+1,rhs.bufferPtr);
		}
	}
	/*
	else
	{
		this->bufferPtr = NULL;
	}
	*/
	//this is in the book but it creates bug. uncomment and see.
	//if booth are the same thing then this should just return itself.
	//not make it NULL
	return *this;
}
