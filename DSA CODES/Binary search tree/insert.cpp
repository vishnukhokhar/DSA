#include<bits/stdc++.h>
using namespace std;
struct Node
{
    Node *right,*left;
    int key;

    Node(int k)
    {
        key=k;
        left=right=NULL;
    }
};

void inorder(Node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        cout<<root->key<<" ";
        inorder(root->right);

    }
}

Node *insert(Node *root, int x)
{
    if(root==NULL)
    return new Node(x);
    if(root->key<x)
    root->right=insert(root->right,x);
    if(root->key>x)
    root->left=insert(root->left,x);
    return root;
}
int main() {
	
	Node *root=new Node(10);
	root->left=new Node(5);
	root->right=new Node(15);
	root->right->left=new Node(12);
	root->right->right=new Node(18);
	int x=20;
	
	root=insert(root,x);
	inorder(root);
}