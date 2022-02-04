#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
    node *prev;
    node(int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
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
node *del_head(node *head)
{
    if(head==NULL)
    return NULL;
    if(head->next==NULL)
    {
        delete head;
        return NULL;

    }

    else
    {
        node *temp=head;
        head=head->next;
        head->prev=NULL;
        delete temp;
        return head;

    }
}
int main()
{
    node *head=new node(45);
    node *temp1=new node(65);
    node *temp2=new node(78);
    head->next=temp1;
    temp1->prev=head;
    temp1->next=temp2;
    temp2->prev=temp1;
    printlist(head);
    head=del_head(head);
    printlist(head);
   
}