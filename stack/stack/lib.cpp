#include "lib.h"

template<class T>
void Stack<T>::Push(T data) {
	container.push_back(data);
}

template<class T>
T Stack<T>::Pop()
{
	auto pos = container.size() - 1;
	auto value = container.at(pos);
	container.erase(pos);
	return value;
}

template<class T>
T Stack<T>::Top()
{
	auto pos = container.size() - 1;
	auto value = container.at(pos);
	return value;

}

template<class T>
int Stack<T>::Size()
{
	return container.size();
}

template<class T>
bool Stack<T>::IsEmpty()
{
	return container.empty();
}
