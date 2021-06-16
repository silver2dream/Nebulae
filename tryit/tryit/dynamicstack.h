#pragma once

template<typename T>
class Node {
public:
	T data;
	Node<T>* previous;
	Node<T>* next;
	bool full;
	//friend class DynamicStack<T>;
};

template<typename T>
class DynamicStack {
private:
	Node<T>* current;
	int count;
public:
	DynamicStack() {
		current = new Node<T>();
	}

	void Push(T data);

	T Pop();

	T Top();

	int Size();

	bool IsEmpty();
};

template<typename T>
inline void DynamicStack<T>::Push(T data)
{
	if (current->full)
	{
		current->next = new Node<T>();
		current->next->previous = current;
		current = current->next;
	}
	
	current->data = data;
	current->full = true;
	count++;
}

template<typename T>
inline T DynamicStack<T>::Pop()
{
	if (IsEmpty()) return 0;

	auto val = current->data;
	auto previous = current->previous;
	delete current;
	current = previous;
	count--;
	return val;
}

template<typename T>
inline T DynamicStack<T>::Top()
{
	if (IsEmpty()) return 0;

	auto val = current->data;
	return val;
}

template<typename T>
inline int DynamicStack<T>::Size()
{
	return count;
}

template<typename T>
inline bool DynamicStack<T>::IsEmpty()
{
	return (count == 0);
}
