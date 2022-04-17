#include<bits/stdc++.h>
using namespace std;

struct node
{
    int key;
    node *left,*right;

    node(int k)
    {
        key=k;
        left=right=NULL;
    }
};

int main()
{
    node *root=new node(10);
    root->left=new node(20);
    root->left->left=new node(25);
    root->right=new node(30);

    
}