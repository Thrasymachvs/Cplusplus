/*
Author     : Christopher Christian (ID# 52697582)
Date       : 10/8/2015
*/
#include <iostream>
#include <string>
#include "stack.h"
using namespace std; 

int main() {
	while (true) {
		std::cout << "Enter a string: ";
		std::string entry;
		std::getline(cin, entry);

		Stack stack = Stack();
		int i;

		for (i = 0; i < entry.length(); i++)
			if (!stack.isFull())
				stack.push(entry[i]);

		while (!stack.isEmpty()) {
			cout << stack.pop();
		}

		cout << endl;
	}

	return 0;
}