#include <iostream>
#include "stack.h"
#include "dynamicstack.h"

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

	auto dynamic_stack = new DynamicStack<int>();
	for (auto i = 0; i < 3; i++)
	{
		dynamic_stack->Push(i);
	}

	for (auto i = 0; i < 3; i++)
	{
		auto val = dynamic_stack->Pop();
		cout << val << endl;
	}

	return 0;
}