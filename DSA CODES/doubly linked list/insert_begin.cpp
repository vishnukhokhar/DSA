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

printlist(node *head)
{
    node *curr=head;
    while(curr!=NULL)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }cout<<endl;
}

node *insert_begin(node *head, int d)
{
    node *temp=new node(d);
    temp->next=head;
    if(head!=NULL)
    {
        head->prev=temp;
        return temp;
    }

}

int main()
{
    node *head=new node(23);
    node *temp1=new node(32);
    node *temp2=new node(65);
    head->next=temp1;
    temp1->prev=head;
    temp1->next=temp2;
    temp2->prev=temp1;
    printlist(head);

    head=insert_begin(head, 56);
    printlist(head);
}