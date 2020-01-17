/*Different traversal method */

#include <iostream>
using namespace std;
class node{
public:
    int data;
    node *left;
    node *right;

    node(int d){
        data = d;
        left = NULL;
        right = NULL;
    }
};

node *buildTree(){
    int d;
    cin>>d;

    if(d==-1){
        return NULL;
    }

    //Create new node
    node *root = new node(d);
    //call the remaining part to solve the left and right recursively

    root->left = buildTree();
    root->right = buildTree();
    return root;
}

//PreorderTraversal

void print(node *root){
    if(root == NULL){
        return;
    }

    cout<<root->data<<" ";
    print(root->left);
    print(root->right);
}

//InorderTraversal
void printInorder(node *root){
    if(root == NULL){
        return;
    }

    printInorder(root->left);
    cout<<root->data<<" ";
    printInorder(root->right);
}

//Postorder traversal

void printPostorder(node *root){
    if(root == NULL){
        return;
    }
    printPostorder(root->left);
    printPostorder(root->right);
    cout<<root->data<<" ";
}

int main() {
    node *root = buildTree();
    print(root);
    cout<<endl;
    printInorder(root);
    cout<<endl;
    printPostorder(root);

    return 0;
}

/*
INPUT:-
8 10 1 -1 -1  6  9 -1 -1 7 -1 -1  3 -1 14 13 -1 -1 -1

OUTPUT:-
8 10 1 6 9 7 3 14 13
1 10 9 6 7 8 3 13 14
1 9 7 6 10 13 14 3 8

*/
