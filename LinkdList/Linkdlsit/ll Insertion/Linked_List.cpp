//Inserion,operation in Linked list.

#include<iostream>
using namespace std;
class node{
public:
    int data;
    node *next;
    node(int d){
        data = d;
        next = NULL;
    }
};

//Insert node at the head of the linked list;
node *insertAtHead(node *&head,int data){
    node *n = new node(data);
    n->next = head;
    head=n;

}

//print the linked list
void print(node *head){
    node *temp = head;
     while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
     }
}

int main() {
    node *head=NULL;
    insertAtHead(head,9);
    insertAtHead(head,5);
    insertAtHead(head,2);
    insertAtHead(head,3);

    print(head);

    return 0;
}
