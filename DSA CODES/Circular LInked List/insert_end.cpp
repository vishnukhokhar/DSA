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

node *insert_end(node *head, int d)
{
    node *temp=new node(d);
    if(head==NULL)
    {
        temp->next=temp;
        return temp;


    }
    else
    {
        temp->next=head->next;
        head->next=temp;
        int t=temp->data;
        temp->data=head->data;
        head->data=t;
        return temp;

    }
}

int main()
{
    node *head=new node(12);
    head->next=new node(23);
    head->next->next=new node(45);
    head->next->next->next=head;
    printlist(head);
    head=insert_end(head, 69);
    printlist(head);
}