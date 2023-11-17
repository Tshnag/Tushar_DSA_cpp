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

void insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);

    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int d)
{
    // Creating a new node for data d
    Node *temp = new Node(d);

    // Inserting by changing ref
    tail->next = temp;
    tail = temp;
}

void printNodes(Node *head)
{
    Node *tempShow = head;

    while (tempShow != NULL)
    {
        cout << tempShow->data << " ";
        tempShow = tempShow->next;
    }
    cout << endl;
}

void insertInPosition(Node *&tail, Node *&head, int position, int d)
{
    // insert at Start
    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }

    // First traversing the linkedlist for (n-1)th node
    Node *tempTrav = head;
    int count = 1;
    while (count < position - 1)
    {
        tempTrav = tempTrav->next;
        count++;
    }

    if (tempTrav->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }

    // Creating a node for data d
    Node *tempPos = new Node(d);

    // Inserting by changing the reference of the nodes
    tempPos->next = tempTrav->next;
    tempTrav->next = tempPos;
}

// Reverse a Linked List:-
void reverseRecur(Node *&head, Node *curr, Node *prev)
{

    // case to terminate the recur
    if (curr == NULL)
    {
        head = prev; // base case
        return;
    }

    Node *forward = curr->next;
    curr->next = prev;
    reverseRecur(head, forward, curr);
    // cout<<"in loop"<<endl;
}

Node *reverseLinkedList(Node *&head)
{
    // Write your code here
    Node *curr = head;
    Node *prev = NULL;
    reverseRecur(head, curr, prev);
    return head;

    // Node* curr = head;
    // Node* prev = NULL;
    // Node* forward = NULL;

    // while(curr != NULL){
    //     forward = curr -> next;
    //     curr -> next = prev;
    //     prev = curr;
    //     curr = forward;
    // }

    // return prev;
}

// Find Middle Node
Node *getMid(Node *head)
{

    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    Node *fast = head->next;
    Node *slow = head;

    while (fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }

        slow = slow->next;
    }

    return slow;
}

Node *findMiddle(Node *head)
{

    return getMid(head);
}

// Check if list is circular or not
bool isCircularList(Node *head)
{
    // Case-1 : Empty list
    if (head == NULL)
    {
        return true;
    }

    // Case-2: One node
    if (head->next == NULL)
    {
        return false;
    }
    else if (head->next == head)
    {
        return true;
    }

    // Case-3: More than one node
    Node *temp = head->next;
    while (temp != NULL && temp != head)
    {
        temp = temp->next;
    }

    if (temp == NULL)
    {
        return false;
    }

    if (temp == head)
    {
        return true;
    }
}

// Detect cycle or loop
Node *floydDetectLoop(Node *head)
{

    if (head == NULL)
    {
        return NULL;
    }

    Node *slow = head;
    Node *fast = head;

    while (slow != NULL && fast != NULL)
    {

        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }

        slow = slow->next;

        if (slow == fast)
        {
            cout << "Cycle is present at " << slow->data << endl;
            return slow;
        }
    }

    return NULL;
}

// Unique (no duplicates) sorted list:-
Node *uniqueSortedList(Node *head)
{

    // empty list
    if (head == NULL)
    {
        return NULL;
    }

    // Remaining Case
    Node *curr = head;

    while (curr != NULL)
    {
        if ((curr->next != NULL) && (curr->data == curr->next->data))
        {
            Node* duplicate = curr->next;
            delete(duplicate);
            curr->next = curr->next->next;
        }
        else // not equal
        {
            curr = curr->next;
        }
    }

    return head;
}

int main()
{

    Node *node1 = new Node(1);
    cout << node1->data << endl;

    Node *head = node1;
    Node *tail = node1;

    // insertAtTail(tail, 12);
    //  printNodes(head);

    // insertAtTail(tail, 14);
    //  printNodes(head);

    // insertInPosition(head, 3, 13);
    // printNodes(head);
    // insertInPosition(head, 1, 9);
    // printNodes(head);

    insertInPosition(tail, head, 2, 2);
    // printNodes(head);

    insertInPosition(tail, head, 3, 2);
    printNodes(head);
    insertInPosition(tail, head, 4, 3);
    printNodes(head);
    insertInPosition(tail, head, 5, 4);
    printNodes(head);

    // printNodes(reverseLinkedList(head));

    // cout<<"Middle of LL = "<<findMiddle(head) ->data<<endl;

    // if (isCircularList(tail))
    // {
    //     cout<<"This is a Circular List"<<endl;
    // }
    // else{
    //     cout<<"Not a Circular List"<<endl;
    // }

    // tail->next = head->next;
    // printNodes(head);
    // floydDetectLoop(head);  //floydDetectLoop will not always return the starting node of the cycle but will return any node in that cycle

    printNodes(uniqueSortedList(head));

    cout<< "head "<< head ->data<<endl;
    cout<< "tail "<< tail ->data<<endl;
    return 0;
}