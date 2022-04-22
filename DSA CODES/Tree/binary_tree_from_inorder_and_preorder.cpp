#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int key;
    Node *right,*left;

    Node(int k)
    {
        key=k;
        right=left=NULL;
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

int preindex=0;
Node *ctree(int in[], int pre[],int is, int ie)
{
    if(is>ie)
    return NULL;

    Node *root=new Node(pre[preindex++]);
    int inindex;
    for(int i=is;i<=ie;i++)
    {
        if(in[i]==root->key)
        {
            inindex=i;
            break;
        }
    }

    root->left=ctree(in,pre,is,inindex-1);
    root->right=ctree(in,pre,inindex+1,ie);
    return root;
}

int main() {
	
	int in[]={20,10,40,30,50};
	int pre[]={10,20,30,40,50};
	int n=sizeof(in)/sizeof(in[0]);
	Node *root=ctree(in, pre, 0, n-1);
	inorder(root);
}

