#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node *right, *left;

    Node(int k)
    {
        key = k;
        left = right = NULL;
    }
};

void inorder(Node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->key << " ";
        inorder(root->right);
    }
}

Node *getSuccessor(Node *curr)
{
    curr = curr->right;
    while (curr != NULL && curr->left != NULL)
    {
        curr = curr->left;
    }
    return curr;
}

Node *delete_bst(Node *root, int x)
{
    if (root == NULL)
        return root;

    if (root->key < x)
    {
        root->right = delete_bst(root->right, x);
    }
    else if (root->key > x)
    {
        root->left = delete_bst(root->left, x);
    }

    else
    {
        if (root->left == NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }

        else if (root->right == NULL)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }
        else
        {
            Node *succ = getSuccessor(root);
            root->key = succ->key;
            root->right=delete_bst(root->right, succ->key);
        }
    }

    return root;
}
int main()
{

    Node *root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    root->right->left = new Node(12);
    root->right->right = new Node(18);
    int x = 15;

    root = delete_bst(root, x);
    inorder(root);
}
