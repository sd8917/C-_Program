
/* Count the node and sum of the node */\



#include<iostream>
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
int height(node *root){

    if(root == NULL){
        return 0;
    }
    //Ask the height of the left and right tree height
    int ls = height(root->left);
    int rs = height(root->right);
    return max(ls,rs)+1;
}
node *buildTree(){
    int d;
    cin>>d;

    if(d==-1){
        return NULL;
    }
    node *root = new node(d);
    root->left = buildTree();
    root->right = buildTree();

    return root;
}

int node_count(node *root){
    if(root==NULL){
        return 0;
    }

    return 1+node_count(root->left)+node_count(root->right);
}
int diameter(node *root){
    if(root == NULL){
        return 0;
    }

    int h1 = height(root->left);
    int h2 = height(root->right);
    int op1 = h1+h2;

    int op2 = diameter(root->left);
    int op3 = diameter(root->right);

    return max(op1,max(op2,op3));
}



int main(){
node *root = buildTree();
// cout<<node_count(root)<<end;
cout<<diameter(root)<<endl;


return 0;
}

/*
INPUT :-
8 10 1 -1 -1 6 9 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
OUTPUT :-
6
*/
