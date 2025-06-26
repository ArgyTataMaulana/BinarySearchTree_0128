#include <iostream>
using namespace std;

class Node
{
    public:
    int info;
    Node *leftchild;
    Node *rightchild;

    // Constructor for thenode class
    Node()
    {
        leftchild = nullptr; // initialize
        rightchild = nullptr; // initialize
    }
};

class binaryTree
{
    public:
    Node *ROOT;

    binaryTree()
    {
        ROOT = nullptr; // initializing ROOT to null
    }

    void search(int element, Node *&parent, Node *&currentNode)
    {
        // this function searches the currentNode of the specified Node as well as the current
        currentNode = ROOT;
        parent = nullptr;
        while ((currentNode != nullptr) && (currentNode->info != element))
        {
            parent = currentNode;
            if (element < currentNode->info)
                currentNode = currentNode->leftchild;
            else
                currentNode = currentNode->rightchild;
        }
    }
};