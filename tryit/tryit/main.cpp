#include <iostream>
#include "stack.h"
using namespace std;

int main() {

	auto stack = new Stack<int>();
	for (auto i = 1; i < 20; i++)
	{
		stack->Push(i);
	}

	for (auto i = 1; i < 20; i++)
	{
		auto val = stack->Pop();
		cout << val << endl;
	}

	if (stack->IsEmpty())
	{
		cout << "It's Empty." << endl;
	}

	cout << "Hello World." << endl;

	return 0;
}