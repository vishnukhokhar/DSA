#include<bits/stdc++.h>
using namespace std;

struct Node
{
    Node *right,*left;
    int key;

    Node(int k)
    {
        key=k;
        right=left=NULL;
    }
};

int is_balanced(Node *root)
{
    if(root==NULL)
    {
        return 0;
    }

    int left_height=is_balanced(root->left);
    if(left_height==-1)
    {
        return -1;
    }

    int right_height=is_balanced(root->right);
    if(left_height==-1)
    {
        return -1;
    }

    if(abs(left_height-right_height)>1)
    {
        return -1;
    }

    else
    {
        return max(left_height,right_height)+1;
    }
}

int main() {
	
	Node *root=new Node(10);
	root->left=new Node(5);
	root->right=new Node(30);
	root->right->left=new Node(15);
	root->right->right=new Node(20);
	
	if(is_balanced(root))
	    cout<<"Balanced";
	else
	    cout<<"Not Balanced";
}