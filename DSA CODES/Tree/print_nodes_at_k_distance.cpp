#include<bits/stdc++.h>
using namespace std;

struct Node
{
    Node *left,*right;
    int key;
    Node (int k)
    {
        left=right=NULL;
        key=k;
    }
};


void print_at_distance_k(Node *root, int k)
{
    if(root==NULL)
    {
        return;
    }
    if(k==0)
    {
        cout<<root->key<<" ";
    }

    else{
        print_at_distance_k(root->left,k-1);
        print_at_distance_k(root->right,k-1);
    }
}

int main()
{
    	
	Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->left->left=new Node(40);
	root->left->right=new Node(50);
	root->right->right=new Node(70);
	root->right->right->right=new Node(80);
    print_at_distance_k(root, 2);
}