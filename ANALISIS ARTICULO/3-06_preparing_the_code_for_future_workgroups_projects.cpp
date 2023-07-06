#include <iostream>
using namespace std;

// Code for the student implementing a Linked List
// File LinkedList.h
template <typename T>
class CLinkedList
{
private: // Structure for nodes in a Linked List
    struct NODE
    {
        T m_data; // The data goes here
        struct NODE * m_pNext; // Pointer to the next Node
        // Some methods go here
    };
    NODE* m_pRoot; // Pointer to the root
public: // More methods go here
};

// Code for the student implementing a Binary Tree
// File BinaryTree.h
template <typename T>
class CBinaryTree
{
private: // Structure for nodes in a Binary Tree
    struct NODE
    {
        T m_data; // The data goes here
        struct NODE * m_pLeft, m_pRight;// Pointer to the left and right node
        // Some methods go here
    };
    NODE* m_pRoot; // Pointer to the root
public: // More methods go here
};

int main()
{
    return 0;
}