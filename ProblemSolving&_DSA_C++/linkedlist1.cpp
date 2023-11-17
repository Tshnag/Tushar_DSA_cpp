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
    // ~Node()
    // {
    //     int value = this->data;
    //     // memory free process
    //     if (this->next != NULL)
    //     {
    //         delete next;
    //         this->next = NULL;
    //     }
    //     cout << "memory is free for node with data " << value << endl;
    // }
};
 
void insertAtHead(Node* &head, int d){
    //1st create new node,
    Node* temp = new Node(d);
    
    //2nd pointing temp node to node1
    temp -> next = head; //head or node1(1st node)
    //3rd refering head to new node or temp 
    head = temp;
}

void printNode(Node* head){
    //step-1: create a temperory node for traversing
    Node* temp1 = head;

    //Loop the temp untill it becomes NULL
    //Then inside the loop print the current node
    //and then point the temp to next node
    while(temp1 != NULL){
        cout<< temp1 -> data <<" ";
        temp1 = temp1 -> next;
    }
    cout<<endl;
}

void insertAtTail(Node* &tail, int d){
    //create a new temporary node
    Node* temp = new Node(d);

    //Changing the reference of Nodes
    tail -> next = temp;
    tail = tail -> next; //or temp

}


//Remove Duplicates from linked list
Node* uniqueSortedList(Node* head)
{

    // empty list
    if (head == NULL)
    {
        return NULL;
    }

    // Remaining Case
    Node* curr = head;

    while (curr != NULL)
    {
        if ((curr->next != NULL) && (curr->data == curr->next->data))
        {
            Node* next_next = curr -> next -> next;   //This step is very important
            Node* nodeToDelete = curr -> next;

            delete(nodeToDelete);
            
            curr->next = next_next;
        }
        else // not equal
        {
            curr = curr->next;
        }
    }

    return head;
}






int main(){
    //creatin a new node
    Node* node1 = new Node(1);
    //cout<<node1 -> data<<endl; printing the data of new node node1
    //cout<<node1 -> next<<endl; priting the address of new node node1
    
    //Creating and pointing the head to node1
    Node* head = node1;
    //calling printNode func
    printNode(head);

    //calling insertAtHead() func
    // cout<<"After inserting at head"<<endl;
    // insertAtHead(head, 15);
    // printNode(head);

    // insertAtHead(head, 16);
    // printNode(head);
    
    //creating tail of node pointer
    Node* tail = node1;

    //calling insertAtTail() func
    cout<<"After inserting at tail"<<endl;
    insertAtTail(tail, 2);
    printNode(head);

    insertAtTail(tail, 3);
    printNode(head);
    insertAtTail(tail, 4);
    printNode(head);
    insertAtTail(tail, 5);
    printNode(head);
    insertAtTail(tail, 6);
    printNode(head);

    
    //printNode(uniqueSortedList(head));  //Remove duplicates



    cout<<"Head "<<head -> data<<endl;
    cout<<"Tail "<<tail -> data<<endl;

    
    return 0;

}