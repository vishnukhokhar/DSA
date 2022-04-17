#include<bits/stdc++.h>
using namespace std;

struct node
{
    int key;
    node *right,*left;

    node(int k)
    {
        key=k;
        left=right=NULL;
    }
};

void prorder(node *root)
{
    if(root!=NULL)
    {
        cout<<root->key<<" ";
        prorder(root->left);
        prorder(root->right);
    }

}

int main()
{
    node *root=new node(10);
	root->left=new node(20);
	root->right=new node(30);
	root->right->left=new node(40);
	root->right->right=new node(50);
    prorder(root);
}