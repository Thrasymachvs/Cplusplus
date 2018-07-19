#include <iostream>
using namespace std;
class String {
public:
	String(const char * s = "");		
	String(const String & s);	
	String operator = (const String & s);
	char & operator [] (int index);
	int size();
	String reverse();
	int indexOf(const char c);
	int indexOf(const String pattern);
	bool operator == (const String s);
	bool operator != (const String s);
	bool operator > (const String s);
	bool operator < (const String s);
	bool operator >= (const String s);
	bool operator <= (const String s);
	String operator + (const String s);
	String operator += (const String s);
	void print(std::ostream & out);
	void read(std::istream & in);
	~String();
private:
	char *buf;
	bool inBounds(int i)
	{
		return i >= 0 && i < strlen(buf);
	}
	static int strlen(const char *s) {
		int len = 0;
		for (int i = 0; s[i]; i++)
			len++;
		return len;
	}

	static char *strcpy(char *dest, const char *src) {
		for (int i = 0; *(dest + i) = *(src + i); i++){
		}
		return dest;
	}

	static char *strdup(const char *src) {
		char *p;
		p = new char[strlen(src) + 1];
		return strcpy(p, src);
	}

	static int strcmp(const char *left, const char *right) {
		for (int i = 0; left[i] != '\0' && right[i] != '\0'; i++) {
			if (left[i] > right[i])
				return -1;
			else if (left[i] < right[i])
				return 1;
		}
		if (strlen(left) == strlen(right))
			return 0;
		else if (strlen(left) < strlen(right))
			return 1;
		else
			return -1;

	}

	static char *strcat(char *dest, const char *src) {
		int j = 0;
		int i = 0;
		for (j = 0; dest[j] != '\0'; j++) {}
		for (i = 0; src[i] != '\0'; i++)
			dest[j + i] = src[i];
		dest[j + i] = '\0';
		return dest;

	}


};
std::ostream & operator << (std::ostream & out, String  str);
std::istream & operator >> (std::istream & in, String & str);
