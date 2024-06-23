#ifndef __PREORDERTRAVERSAL__
#define __PREORDERTRAVERSAL__
#include <iostream>

template <typename T>
struct Node {
    T value = 0;
    Node<T>* left = nullptr;
    Node<T>* right = nullptr;
};

template <typename T>
void preorderTraversal(Node<T>* node) {
    if (node == nullptr) {
        return;
    }

    std::cout << node -> value << " ";

    preorderTraversal(node -> left);
    preorderTraversal(node -> right);
    
}

#endif // __PREORDERTRAVERSAL__