#pragma once
#include <vector>

using namespace std;

template<typename T>
class Stack {
private:
	vector<T> container;

public:
	void Push(T data);
	T Pop();
	T Top();
	int Size();
	bool IsEmpty();
};

