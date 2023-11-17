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


//Check if list is circular or not
bool isCircularList(Node* head){
    //Case-1 : Empty list
    if(head == NULL){
        return true;
    }

    //Case-2: One node
    if(head ->next == NULL){
        return false;
    }
    else if(head -> next == head){
        return true;
    }

    //Case-3: More than one node
    Node* temp = head -> next;
    while(temp != NULL && temp != head){
        temp = temp -> next;
    }

    if(temp == NULL){
        return false;
    }

    if(temp == head){
        return true;
    }


}


void halfOfCircular(Node* tail){

    if(tail == NULL){
        cout<<"List is empty"<<endl;
        return;
    }


    //Assuming that the list is sorted 
    int tempData  = tail -> data;
    tempData = tempData/2;
    cout<<"Half of list is "<<tempData<<endl;

    Node* temp = tail -> next;
    while(temp -> data != tempData){
        temp = temp -> next;
    }

    Node* curr = temp;
    temp = temp -> next;
    curr -> next = tail -> next;
    tail -> next = temp;

    printNodes(curr -> next);
    printNodes(temp);

}


int main()
{

    Node *tail = NULL;

    insertNode(tail, 6, 6);
    printNodes(tail);

    insertNode(tail, 6, 1);
    printNodes(tail);

    insertNode(tail, 1, 2);
    printNodes(tail);

    insertNode(tail, 2, 3);
    printNodes(tail);

    insertNode(tail, 3, 4);
    printNodes(tail);

    insertNode(tail, 4, 5);
    printNodes(tail);

    // if (isCircularList(tail))
    // {
    //     cout<<"This is a Circular List"<<endl;
    // }
    

    halfOfCircular(tail);
    

    cout << "Tail = " << tail->data << endl;

    return 0;
}