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
};