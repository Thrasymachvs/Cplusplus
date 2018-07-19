#include "String.h"
using namespace std;
String::String(const char * s) {
	buf = strdup(s);

}

String::String(const String & s) {
	buf = strdup(s.buf);
}

String String::operator = (const String & s) {
	buf = strdup(s.buf);
	return *this;
}

void String::print(ostream &out) {
		out << buf;
	}

void String::read(istream &in) {
		in >> buf;
	}

ostream & operator << (ostream & out, String str) {
		str.print(out);
		return out;
	}

istream & operator >> (istream & in, String & str) {
		str.read(in);
		return in;
	}

int String::size() {
	int i;
	for (i = 0; buf[i]; ++i) {
	}
	return i;
}

char & String::operator[] (int index) {
	char error = (char) '-1';
	if (inBounds(index))
		return *(buf + index);
	else
		return error;
}

String String::reverse() {
	String reverse = String(buf);
	int index = strlen(buf) - 1;
	for (int i = 0; i <= index; i++)
		reverse[i] = buf[index - i];
	return reverse;
}

int String::indexOf(const char c) {
	int i; 
	for (i = 0; buf[i]; ++i) {
		if (buf[i] == c)
			return i;
	}
	return -1;

}

int String::indexOf(const String pattern) {
	char firstC = pattern.buf[0];
	int i = indexOf(firstC);
	i++;
	if (i != '\0') {
		for (int j = 1; pattern.buf[j]; j++) {
			if (buf[i] != pattern.buf[j])
				return -1;
			i++;
		}
		return indexOf(firstC);
	}
	else
		return -1;

}

bool String::operator == (const String s) {
	return (strcmp(buf, s.buf) == 0);
}

bool String::operator != (const String s) {
	return (strcmp(buf, s.buf) != 0);
}

bool String::operator > (const String s) {
	return (strcmp(buf, s.buf) == -1);
}

bool String::operator < (const String s) {
	return (strcmp(buf, s.buf) == 1);
}

bool String::operator >= (const String s) {
	return strcmp(buf, s.buf) == -1 || strcmp(buf, s.buf) == 0;
}

bool String::operator <=(const String s) {
	return strcmp(buf, s.buf) == 1 || strcmp(buf, s.buf) == 0;
}

String String::operator + (const String s) {
	char* newBuf = new char[(strlen(buf) + strlen(s.buf) + 1)];
	strcpy(newBuf, buf);
	strcpy((newBuf+strlen(newBuf)), s.buf);
	return String(newBuf);
}

String String::operator += (const String s) {
	char* oldBuf = buf; 
	buf = new char[(strlen(buf) + strlen(s.buf) + 1)];
	strcpy(buf, oldBuf);
	strcpy((buf + strlen(buf)), s.buf);
	delete[] oldBuf;
	return *this;
}

String::~String() {
	delete[] buf;
}


