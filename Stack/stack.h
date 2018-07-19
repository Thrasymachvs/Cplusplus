
/*
	Author     : Christopher Christian (ID# 52697582)
	Date       : 10/7/2015
*/

#include <iostream>
using namespace std;

#define STACK_CAPACITY 1000
class Stack
{
private: 
	char items[STACK_CAPACITY];
	int size;
public:
	Stack() {
		size = 0; 
	}
		
	
	void push(char c) {
		if (size < STACK_CAPACITY) 
		items[++size] = c;
		
		else
			cout << "Error: Stack full\n";
	}

	 char pop() {
		if (size == 0)
			cout << "Error: Stack Empty\n";
		else
			return items[size--]; 
	}

	char top() {
		return items[size]; 
	}
	
	bool isEmpty() {
		return size == 0;
	}
	bool isFull() {
		return size == STACK_CAPACITY;
	}

	
};



