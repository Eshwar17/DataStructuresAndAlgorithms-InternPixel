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

int main(){
    Node* node1 = new Node(10);
    cout << node1 -> data << endl;
    cout << node1 -> next << endl;
    return 0;
}