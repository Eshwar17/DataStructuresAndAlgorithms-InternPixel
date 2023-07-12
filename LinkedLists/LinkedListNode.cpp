#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }
};

//Insertion at head where head's reference is passed as a parameter so that we can avoid creating new node instead we can take the copy of it
void insertAtHead(Node* &head, int d) {
    //New node creation
    Node* newNode = new Node(d);
    newNode -> next = head;
    head = newNode;
}

//Insertion at tail of the linkedlist
void insertAtTail(Node* &tail, int d) {
    //New Node creation
    Node* newNode = new Node(d);
    tail -> next = newNode;
    tail = tail -> next;
}

//Print Function which can print the linkedlist
void print(Node* &head){
    Node* temp = head;

    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main(){
    Node* node1 = new Node(10);
    cout << node1 -> data << endl;
    cout << node1 -> next << endl;

    //head pointed to node1
    Node* head = node1;
    Node* tail = node1;

    insertAtHead(head, 12);
    insertAtHead(head, 15);
    insertAtTail(tail, 1);

    print(head);

    return 0;
}