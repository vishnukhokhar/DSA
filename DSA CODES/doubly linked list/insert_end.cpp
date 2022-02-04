#include<iostream>
using namespace std;
struct node
{
    node *next;
    node *prev;
    int data;
    node(int x)
    {
        data=x;
        next=prev=NULL;
    }
};

void printlist(node *head)
{
    node *curr=head;
    while(curr!=NULL)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }cout<<endl;
}

node *insert_end(node *head, int i)
{
    node *temp=new node(i);
    if(head==NULL)
    return temp;
    node *curr=head;
    while(curr->next!=NULL)
    {
        curr=curr->next;
    }
    curr->next=temp;
    return head;
}

int main()
{
    node *head=new node(45);
    node *temp1=new node(65);
    node *temp2=new node(87);
    head->next=temp1;
    temp1->prev=head;
    temp1->next=temp2;
    temp2->prev=temp1;

    printlist(head);
    head=insert_end(head, 69);
    printlist(head);
}