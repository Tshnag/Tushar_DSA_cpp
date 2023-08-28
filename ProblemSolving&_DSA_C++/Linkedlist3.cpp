// DELETION IN LINKED LIST :-
// CASE 1: MIDDLE
// CASE 2: END, 1 & 2 CAN BE IN SAME FUNC

#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

class Node
{

public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    ~Node()
    {
        int value = this->data;
        // memory free process
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "memory is free for node with data " << value << endl;
    }
};

void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);

    tail->next = temp;
    tail = temp;
}

void printNodes(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void deleteNode(int position, Node *&head, Node *&tail)
{

    // deleting first node or start
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;

        // memory free start node & point it to NULL
        temp->next = NULL;
        delete temp;
    }

    else
    {
        // deleting any middle node or last node
        Node *curr = head;
        Node *prev = NULL;

        // for traversing prev and curr to req pos
        int cnt = 1;
        while (cnt < position)
        {
            // moving the prev & curr forward
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        if(curr -> next == NULL){
            prev -> next = curr -> next;
            tail = prev;

            curr -> next = NULL;
            delete curr;
            return;
        }
        // Now deleting by changing ref of prev & curr
        prev->next = curr->next;

        // free memory and point the curr to NULL
        curr->next = NULL;
        delete curr;
    }
}

int main()
{

    Node *node1 = new Node(10);

    Node *head = node1;
    Node *tail = node1;

    insertAtTail(tail, 11);
    printNodes(head);
    insertAtTail(tail, 12);
    printNodes(head);
    cout << "head= " << head->data << endl;
    cout << "tail= " << tail->data << endl;

    // delteing
    deleteNode(3, head, tail);
    printNodes(head);

    cout << "head= " << head->data << endl;
    cout << "tail= " << tail->data << endl;

    return 0;
}
