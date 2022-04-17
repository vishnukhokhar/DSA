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
void level_order_traversal(Node *root)
{
    if(root==NULL)
    {
        return;
    }
    queue<Node *>q;
    q.push(root);
    while(q.empty()==false)
    {
        Node *curr=q.front();
        q.pop();
        cout<<curr->key<<" ";
        if(curr->left!=NULL)
        {
            q.push(curr->left);
        }

        if(curr->right!=NULL)
        {
            q.push(curr->right);
        }
    }
}

int main()
{
    	Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->left->left=new Node(40);
	root->left->right=new Node(50);
	root->right->left=new Node(60);
	root->right->right=new Node(70);

    level_order_traversal(root);
}