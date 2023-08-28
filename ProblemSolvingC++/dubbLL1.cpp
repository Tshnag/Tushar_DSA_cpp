//Creating and manipulating doubly linked lists

#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
 
class Node{

    public:
    int data;
    Node* prev;
    Node* next;

    //constructor for initialising node
    Node(int d){
        this -> data = d;
        this -> prev = NULL;
        this -> next = NULL;
    }

};

void printNodes(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout<< temp -> data<<" ";
        temp = temp -> next;
        
    }
    cout<<endl;
}

//gives lenght of linked list( we could also use int func to return len)
void getListLength(Node* head){
    Node* tempLen = head;
    int cnt=0;
    while(tempLen != NULL){
        tempLen = tempLen -> next;
        cnt++;
    }
    cout<<"Lenght of List is = "<<cnt<<endl;
}

//Inserting a node in doubly linked list
void insertAtHead(Node* &head, int d){
    //step1: create a new node temp;
    Node* temp = new Node(d);
    //step2: point the temp to curr(head) node
    temp -> next = head;
    //step3: point the head node to temp
    head -> prev = temp;
    //step4: change the head to temp 
    head = temp;

}

//Inserting a new node at tail of DLL
void insertAtTail(Node* &tail, int d){
    //step1: create a new node temp;
    Node* temp = new Node(d);
    //step2: point the tail to temp node
    tail -> next = temp;
    //step3: point the temp to tail node
    temp -> prev = tail;
    //step4: change the tail towards temp
    tail = temp;


}


int main(){
    
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    printNodes(head);
    getListLength(head);

    insertAtHead(head, 9);
    printNodes(head);
    getListLength(head);
    
    insertAtHead(head, 8);
    printNodes(head);
    
    insertAtHead(head, 6);
    printNodes(head);

    insertAtTail(tail, 11);
    printNodes(head);

    cout<<" head "<< head ->data<<endl;
    cout<<" tail "<< tail ->data<<endl;

    return 0;
}