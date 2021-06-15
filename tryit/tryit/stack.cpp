#include "stack.h"

#include <iostream>

using namespace std;

//template<typename T>
//Stack<T>::Stack() {
//	capacity = 16;
//	container = new T[capacity];
//}
//
//template<typename T>
//void Stack<T>::Push(T data)
//{
//	if (count < capacity)
//	{
//		container[count] = data;
//		count++;
//	}
//	else
//	{
//		capacity *= 2;
//		auto newContainer = new int[capacity];
//		for (auto i = 0; i < count; i++)
//		{
//			newContainer[i] = container[i];
//		}
//		delete container;
//		container = newContainer;
//		container[count] = data;
//	}
//}

//int Stack::Pop()
//{
//	if (IsEmpty()) return 0;
//
//	count -= 1;
//	auto val = container[count];
//	return val;
//}
//
//int Stack::Top()
//{
//	if (IsEmpty()) return 0;
//	auto idx = count - 1;
//	auto val = container[idx];
//	return val;
//}
//
//int Stack::Size()
//{
//	return count;
//}
//
//int Stack::At(int index)
//{
//	return container[index];
//}
//
//bool Stack::IsEmpty()
//{
//	if (count <= 0) return true;
//
//	return false;
//}

