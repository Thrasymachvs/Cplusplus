#include <iostream>
#include <string>
using namespace std;

int main() {
	std::cout << "Enter a string: ";
	std::string entry;
	std::getline(std::cin, entry);

	Stack stack = new Stack();
	int i;
	for (i = 0; i < entry.size(); i++)
		stack.push(entry[i]);
		cout << stack[i];
}