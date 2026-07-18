#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};

void pushFront(Node **head, int value){
    Node *newNode = new Node;
    newNode -> data = value;
    newNode -> next = *head;
    *head = newNode;
}

void printList(Node *head){
    Node *current = head;
    while (current != nullptr){
        cout << current -> data << " -> ";
        current = current -> next;
    }
    cout << "nullptr" << endl;
}

void freeList(Node *&head){
    while (head != nullptr){
        Node *temp = head;
        head = head -> next;
        delete temp;
    }
}

int main(){
    Node *head = nullptr;
    pushFront(&head, 10);
    pushFront(&head,20);
    pushFront(&head, 30);
    cout << ":";
    printList(head);
    freeList(head);
    
    system("pause");
    return 0;
}