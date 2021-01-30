// SharkStringConverter.cpp : Hiermit werden die exportierten Funktionen für die DLL definiert.
//

#include "pch.h"
#include "framework.h"
#include "SharkStringConverter.h"
using namespace std;

SHARKSTRINGCONVERTER_API char * stringtochar(string stri)
{
	int lengthd = stri.length() + 1;
	char* content{ (char*)malloc(lengthd) };
	if (content == nullptr || content == NULL) {
		throw ("Malloc Err");
		return (char*)"";
	}
	strcpy_s(content,(rsize_t)lengthd, stri.c_str());
	return content;
}
SHARKSTRINGCONVERTER_API string chartostring(char* stri)
{
	std::stringstream ss;
	string outputoffile{ "" };
	ss << stri;
	ss >> outputoffile;
	ss.clear();
	return outputoffile;
}