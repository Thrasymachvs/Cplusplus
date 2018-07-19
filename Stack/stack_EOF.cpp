/*
		Author    : Christopher Christian (52697582)
		Date      : 10/8/2015
*/

#include <iostream>
#include <string>
#include "stack.h"
using namespace std;

int main() {
	Stack stack = Stack();
	while (!cin.eof()) {
		std::cout << "Enter a string:";
		std::string entry;
		std::getline(cin, entry);
		entry += "\n";


		int i;

		for (i = 0; i < entry.length(); i++)
			if (!stack.isFull())
				stack.push(entry[i]);

	}
			
				
	if (cin.eof()) {
		while (!stack.isEmpty()) {
			cout << stack.pop();

		}
	}
	cout << endl;

	return 0;
}