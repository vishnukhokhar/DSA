#include<bits/stdc++.h>
using namespace std;

struct node
{
    int key;
    node *right,*left;

    node(int k)
    {
        key=k;
        right=left=NULL;
    }
};

void inorder(node * root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        cout<<root->key<<" ";
        inorder(root->right);
    }
}

int main()
{
	node *root=new node(10);
	root->left=new node(20);
	root->right=new node(30);
	root->right->left=new node(40);
	root->right->right=new node(50);

    inorder(root);

}