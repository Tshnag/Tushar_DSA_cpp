#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
 
class Node{

    public:
    int data;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);

    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d){
    //Creating a new node for data d
    Node* temp = new Node(d);

    //Inserting by changing ref
    tail -> next = temp;
    tail = temp;
}

void printNodes(Node* head){
    Node* tempShow = head;

    while(tempShow != NULL){
        cout<< tempShow -> data<<" ";
        tempShow = tempShow -> next;
    }
    cout<<endl;
}



void insertInPosition(Node* &tail, Node* &head, int position, int d){
    //insert at Start
    if(position == 1){
        insertAtHead(head, d);
        return;
    }

    //First traversing the linkedlist for (n-1)th node
    Node* tempTrav = head;
    int count=1;
    while(count < position-1 ){
        tempTrav = tempTrav -> next;
        count++;
    }

    if(tempTrav -> next == NULL){
        insertAtTail(tail, d);
        return;
    }    

    //Creating a node for data d
    Node* tempPos = new Node(d);

    //Inserting by changing the reference of the nodes
    tempPos -> next = tempTrav -> next;
    tempTrav -> next = tempPos;

    
}

void reverseRecur(Node* &head, Node* curr, Node* prev){

    //case to terminate the recur
    if(curr == NULL){
        head = prev;  //base case
        return;
    }
    
    Node* forward = curr -> next;
    curr -> next = prev;
    reverseRecur(head, forward, curr);
    // cout<<"in loop"<<endl;


}


Node* reverseLinkedList(Node* &head)
{
    // Write your code here
    Node* curr = head;
    Node* prev = NULL;
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
Node* getMid(Node* head){

    if(head == NULL || head -> next ==NULL){
        return head;
    }

    Node* fast = head -> next;
    Node* slow= head;

    while(fast != NULL){
        fast = fast -> next;
        if(fast != NULL){
            fast = fast ->next;
        }

        slow = slow -> next;
    }

    return slow;

}

Node* findMiddle(Node* head){
   
    return getMid(head);
    
}



int main(){

    Node* node1 = new Node(10);
    cout<<node1 -> data<<endl;
    
    Node* head = node1;
    Node* tail = node1;
    
    insertAtTail(tail, 12);
    printNodes(head);

    insertAtTail(tail, 14);
    printNodes(head);

    // insertInPosition(head, 3, 13);
    // printNodes(head);
    // insertInPosition(head, 1, 9);
    // printNodes(head);

    insertInPosition(tail, head, 3, 13);
    printNodes(head);

    insertInPosition(tail, head, 5, 15);
    printNodes(head);

    
    // printNodes(reverseLinkedList(head));

    cout<<"Middle of LL = "<<findMiddle(head) ->data<<endl;

    cout<< "head "<< head ->data<<endl;
    cout<< "tail "<< tail ->data<<endl;
    return 0;
}