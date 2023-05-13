#include <stdio.h>
#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    
    //Constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
void InsertAtHead(Node* &head ,int d){
    //New Node
    Node* temp= new Node(d);
    temp->next = head;
    head = temp;
}
void InsertAtEnd(Node* &tail, int d){
    //New Node
    Node* temp= new Node(d);
    temp->next = tail;
    tail=temp;
}

void InsertInMiddle(Node* &head, Node* &tail, int position, int d){
    Node* temp = head;
    int cnt = 1;
    if(position==1){
        InsertAtHead(head, d);
        return;
    }
    if(temp->next==NULL){
        InsertAtEnd(tail, d);
        return;
    }
    
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    
    //create a Node
    Node* nodetoinsert = new Node(d);
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
    
}
void PrintLL(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main()
{
    Node* node1 = new Node(10);
    Node* tail = node1;
    Node* head = node1;
    InsertAtEnd(tail, 30);
    InsertAtEnd(tail, 45);
    PrintLL(head);
    
}
