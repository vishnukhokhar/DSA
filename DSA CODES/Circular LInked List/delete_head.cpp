#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
    node(int x)
    {
        data=x;
        next=NULL;
    }
};

void printlist(node *head)
{
    node *p=head;
    if(head==NULL)return;
    do
    {
        cout<<p->data<<" ";
        p=p->next;
    }while(p!=head); cout<<endl;
}

node *delete_head(node *head)
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
        head->data=head->next->data;
        node *temp=head->next;
        head->next=head->next->next;
        delete temp;
        return head;
    }
}

int main()
{
    node *head=new node(45);
    head->next=new node(78);
    head->next->next=new node(98);
    head->next->next->next=head;
    printlist(head);
    head=delete_head(head);
    printlist(head);
}