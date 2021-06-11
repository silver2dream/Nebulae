#include "node.h"

template<class T>
void Node<T>::Traversal(Node* node) {

	if (node == nullptr) return;

	Traversal(node->Left);
	Traversal(node->Right);
}

template<class T>
void Node<T>::Create(char* data) {

}
