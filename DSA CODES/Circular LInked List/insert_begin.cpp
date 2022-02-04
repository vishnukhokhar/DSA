#include<iostream>
using namespace std;
struct node
{
    node *next;
    int data;
    node (int x)
    {
        data=x;
        next=NULL;
    }
};

void printlist(node *head)
{
  if(head==NULL)return;
  node *p=head;
  do
  {
      cout<<p->data<<" ";
      p=p->next;
  }while(p!=head); cout<<endl;
}
node *insert_begin(node *head, int d)
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

        int t=head->data;
        head->data=temp->data;
        temp->data=t;
        return head;
    }
}

int main()
{
    node *head=new node(45);
    head->next=new node(89);
    head->next->next=new node(98);
    head->next->next->next=head;
    printlist(head);
    head=insert_begin(head, 69);
    printlist(head);
}