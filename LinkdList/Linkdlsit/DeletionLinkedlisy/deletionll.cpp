/*deletion in of the node*/
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

//insertAt tail
void insertAtTail(node *&head,int data){

    if(head==NULL){
        head = new node(data);
        return;
    }

    //if head is not null
    node *tail = head;
    while(tail->next != NULL){
        tail = tail->next;
    }
    tail->next=new node(data);
    return;

}

int length(node *head){
int len =0;
while(head!=NULL){
    head = head->next;
    len++;
}
return len;
}

//insert in the middle of the linked list
void insertAtMiddle(node*&head,int data,int p){

    if(head == NULL || p==0){
        insertAtHead(head,data);
    }
    else if(p>length(head)){
        insertAtTail(head,data);
    }

    else{
    // Insert in the middle
    //take p-1 jump;
    int jump =1;
    node *temp =head;
    while(jump<=p-1){
        temp = temp->next;
        jump += 1;
    }
    node *n =new node(data);
    n->next = temp->next;
    temp->next = n;
}

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
    insertAtTail(head,2);
    insertAtTail(head,4);
    insertAtTail(head,6);
    insertAtTail(head,1);

    print(head);

    return 0;
}


