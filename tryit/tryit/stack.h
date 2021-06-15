#pragma once

template<typename T>
class Stack {
private:
	T* container = nullptr;
	int capacity = 0;
	int count = 0;
public:
	Stack();
	
	void Push(T data);

	int Pop();
	
	int Top();
	
	int Size();

	bool IsEmpty();
};

template<typename T>
inline Stack<T>::Stack()
{
	capacity = 16;
	container = new T[capacity];
}

template<typename T>
inline void Stack<T>::Push(T data)
{
	if (count < capacity)
	{
		container[count] = data;
		count++;
	}
	else
	{
		capacity *= 2;
		auto newContainer = new T[capacity];
		for (auto i = 0; i < count; i++)
		{
			newContainer[i] = container[i];
		}
		delete container;
		container = newContainer;
		container[count] = data;
	}
}

template<typename T>
inline int Stack<T>::Pop()
{
	if (IsEmpty()) return 0;

	count -= 1;
	auto val = container[count];
	return val;
}

template<typename T>
inline int Stack<T>::Top()
{
	if (IsEmpty()) return 0;
	auto idx = count - 1;
	auto val = container[idx];
	return val;
}

template<typename T>
inline int Stack<T>::Size()
{
	return count;
}

template<typename T>
inline bool Stack<T>::IsEmpty()
{
	if (count <= 0) return true;

	return false;
}
