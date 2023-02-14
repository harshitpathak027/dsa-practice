    #include <iostream>
    using namespace std;


    struct Node{
    int data;
    Node *next;

    };

    void traverse(Node *n){
        while(n!=NULL){
            cout<<n->data<<" ";
            n = n->next;

        }
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
    traverse(head);
    }