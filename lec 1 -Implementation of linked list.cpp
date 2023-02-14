#include <iostream>
using namespace std;

struct Node{
	int data;
	Node *next;

};

void printlist(Node *n){
	while(n!=NULL){
		cout<<n->data<<" ";
		n= n->next;

	}
}

int main(){
	struct Node *head = new Node();
	struct Node *first = new Node();
	struct Node *second = new Node();
	head->data = 10;
	head->next  = first;
	first->data = 20;
	first->next = second;
	second->data = 30;
	second->next = NULL;
	printlist(head);
}