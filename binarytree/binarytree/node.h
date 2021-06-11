#pragma once

template<class T>
class Tree;

template<class T>
class Node {

private:
	T data = {};
	Node* Parent = nullptr;
	Node* Left = nullptr;
	Node* Right = nullptr;

public:
	void Traversal(class Node* node);
	void Create(char* data);

	template<class T>
	friend class Tree;
};

template<class T>
class Tree {
	Node<T>* root;
};
