// Circular linked list and its OPERATIONS;

#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

class Node
{

public:
    int data;
    Node *next;

    // constructor for initialising node
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }

    // Destructor for deleting the node
    ~Node()
    {
        int val = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is freed for node " << val << endl;
    }
};

void insertNode(Node *&tail, int element, int d)
{
    // assuming that the element is present in the list, then,

    // For empty list,
    if (tail == NULL)
    {
        Node *newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    // For non-empty list,
    else
    {
        // assuming that the element is present in the list,

        Node *curr = tail;

        while (curr->data != element)
        {
            curr = curr->next;
        }

        // Now elemnt is found in -> curr,
        Node *temp = new Node(d);

        temp->next = curr->next;
        curr->next = temp;
    }
}

void deleteNodes(Node *&tail, int element)
{
    // if the list is empty
    if (tail == NULL)
    {
        cout << "The List is empty! Please try inserting the element: " << endl;
    }
    // If the list is non-empty
    else
    {
        Node *prev = tail;
        Node *curr = prev->next;

        while (curr->data != element)
        {
            prev = curr;
            curr = curr->next;
        }
        // Now element is found!
        // proceed to delete
        prev->next = curr->next;

        // if there is only one element,
        if (curr == prev)
        {
            tail = NULL;
        }

        // for 2 or more elements,
        if (tail == curr)
        {
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}

void printNodes(Node *tail)
{
    Node *tempTrav = tail;
    
    //for empty list
    if (tail == NULL)
    {
        cout << "list is empty! Please add an element. "<<endl;
        return;
    }
    
    else
    {
        do
        {
            cout << tail->data << " ";
            tail = tail->next;
        } while (tail != tempTrav);
        cout << endl;
    }
}





int main()
{

    Node *tail = NULL;

    insertNode(tail, 3, 3);
    printNodes(tail);

    insertNode(tail, 3, 5);
    printNodes(tail);

    insertNode(tail, 5, 8);
    printNodes(tail);

    insertNode(tail, 5, 6);
    printNodes(tail);

    insertNode(tail, 6, 7);
    printNodes(tail);

    insertNode(tail, 3, 4);
    printNodes(tail);



    cout << "Tail = " << tail->data << endl;

    return 0;
}