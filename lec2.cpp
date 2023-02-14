#include <iostream>
using namespace std;


struct Node{
int data;
Node *next;

};


//travering the linked list
void traverse(Node *n){
    while(n!=NULL){
        cout<<n->data<<" ";
        n = n->next;

    }
}

Node *insertend(Node *head,int x){
    Node *temp = new Node();
    temp->data = x;
    Node *curr = head;
    while(curr->next!=NULL){
        curr = curr->next;
    }
    curr->next = temp;
    temp->next = NULL;
    return head;
}

Node *insertbegin(Node *head,int x){

    Node *temp = new Node();
    temp->data = x;
    temp->next = head;
    return temp;
}

int main(){

Node *head = NULL;
head = insertbegin(head,5);
head = insertbegin(head,10);
head  = insertend(head,25);
head = insertend(head,35);
head = insertbegin(head,1);
traverse(head);
}