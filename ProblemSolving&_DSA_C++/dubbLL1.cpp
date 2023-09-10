// Creating and manipulating doubly linked lists

#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

class Node
{

public:
    int data;
    Node *prev;
    Node *next;

    // constructor for initialising node
    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
    //Destructor for deleting the node,
    ~Node(){
        int val = this -> data;
        if(next != NULL){
            delete next;
            next = NULL;
        }
        cout<<" Memory is freed for node "<<val<<endl;
    }
};

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

// gives lenght of linked list( we could also use int func to return len)
int getListLength(Node *head)
{
    Node *tempLen = head;
    int cnt = 0;
    while (tempLen != NULL)
    {
        tempLen = tempLen->next;
        cnt++;
    }
    return cnt;
}

// Inserting a new node at head in doubly linked list
void insertAtHead(Node *&head, Node* &tail, int d)
{
    // for empty list
    if (tail == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        // step1: create a new node temp;
        Node *temp = new Node(d);
        // step2: point the temp to curr(head) node
        temp->next = head;
        // step3: point the head node to temp
        head->prev = temp;
        // step4: change the head to temp
        head = temp;
    }
}

// Inserting a new node at tail of DLL
void insertAtTail( Node* &head, Node *&tail, int d)
{
    // for empty list
    if (tail == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        // step1: create a new node temp;
        Node *temp = new Node(d);
        // step2: point the tail to temp node
        tail->next = temp;
        // step3: point the temp to tail node
        temp->prev = tail;
        // step4: change the tail towards temp
        tail = temp;
    }
}

void insertAtPosition(Node *&head, Node *&tail, int pos, int d)
{
    // Step1: Create a new node temp
    Node *temp = new Node(d);

    // if inserting at pos=1, i.e at start position,then,
    if (pos == 1)
    {
        insertAtHead(head, tail, d);
        return;
    }

    // Traversing the DLL to insert the elements,
    Node *before = NULL;
    Node *after = head;
    int cnt = 1;
    while (cnt < pos)
    {
        before = after;
        after = after->next;
        cnt++;
    }

    //if inserting at end pos,
    if (before == tail)
    {
        insertAtTail(head, tail, d);
        return;
    }

    // Now we have both before and after nodes of the DLL, then,
    // insert the new node into the pos by changing the ref
    temp->prev = before;
    temp->next = before->next;
    before->next = temp;
    after->prev = temp;
}

void deleteNodeAt(Node* &head, Node* &tail, int pos){
    //deleting the first node or start node,
    if(pos==1){
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp -> next;   //changing the pos of head to next node
        temp -> next = NULL;

        //Last step: free the memory for temp,
        delete temp;
    }
    else{
        //Deleting the middle node or at any position in DLL,
        Node* prev = NULL;
        Node* curr = head;
        int count=1; //counter for traversing

        while(count < pos){
            prev = curr;
            curr = curr -> next;
            count++;
        } // Now we have prev and curr(to be deleted) nodes, then,
        if(curr -> next == NULL){
            curr -> prev = NULL;
            prev -> next = curr -> next;
            tail = prev;
            delete curr;
            return;
        }
        prev -> next = curr -> next;
        curr -> next -> prev = prev;
        curr -> prev = NULL;
        curr -> next = NULL;

        delete curr;
    }
}


int main()
{

    // Node *node1 = new Node(10);
    // Node *head = node1;
    // Node *tail = node1;

    //if the list is empty, then,
    Node* head = NULL; 
    Node* tail = NULL; 

    printNodes(head);
    cout << "Lenght of the list is = " << getListLength(head) << endl;

    insertAtHead(head,tail, 9);
    printNodes(head);
    getListLength(head);

    insertAtHead(head,tail, 8);
    printNodes(head);

    insertAtHead(head,tail, 6);
    printNodes(head);

    insertAtTail(head,tail, 11);
    printNodes(head);

    insertAtPosition(head, tail, 5, 7);
    printNodes(head);

    deleteNodeAt(head, tail, 5);
    printNodes(head);

    cout << "Lenght of the list is = " << getListLength(head) << endl;
    cout << " head " << head->data << endl;
    cout << " tail " << tail->data << endl;

    return 0;
}