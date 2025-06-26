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

        // step 5.: if parent is NULL (tree is empty)
        if (parent == nullptr)
        {
            // 5a: mark the new node as the root
            ROOT = newNode;

            // 5b: exit
            return;
        }
        
        //step6: if the value in the data field of newnode is less than that of parent
        if (x < parent->info)
        {
            // 6a: make the left child of parent point to newnode
            parent->leftchild = newNode;

            // 6b: exit
            return;
        }
        // step 7: if the value in the data field of  the new node isgreater than of parent
        else if(x > parent->info)
        {
            // 7a: make the right child of parent point to newnode
            parent->rightchild = newNode;

            // 7b: exit
            return;
        }
    }
    bool isEmpty()
    {
        // checks if the tree is emptyy
        return ROOT == nullptr;
    }

    void inorder(Node *ptr)
    {
        if (isEmpty())
        {
            /* code */
            cout << "Tree is empty" << endl;
            return;
        }
        if (ptr == nullptr)
        return;

        inorder(ptr->leftchild);
        cout << ptr->info << " "; // parent
        inorder(ptr->rightchild);       
    }

    void preorder(Node *ptr)
    {
        if (isEmpty())
        {
            /* code */
            cout << "Tree is empty" << endl;
            return;
        }
        if (ptr == nullptr)
        return;

        cout << ptr->info << " "; // parent
        preorder(ptr->leftchild);
        preorder(ptr->rightchild);       
    }
};