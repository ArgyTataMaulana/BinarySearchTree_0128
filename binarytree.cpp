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

    void insert()
    {
        int x;
        cout << "Maasukkan nilai: ";
        cin >> x;

        // step 1.: Allocate memory for the new node
        Node *newNode = new Node();

        // step 2.: Assign valur to the data field of new node
        newNode->info = x;

        // step 3.: Make the left and right child of the new node point to NULL
        newNode->leftchild = nullptr;
        newNode->rightchild = nullptr;

        // step 4.: Locate the node witch will be the parent of the node to be inserted
        Node *parent = nullptr;
        Node *currentNode = nullptr;
        search(x, parent, currentNode);
    }
};