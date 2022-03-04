#include<bits/stdc++.h>
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

node *printlist(node *head)
{
    node *curr=head;
    while(curr!=NULL)
    {
        cout<<curr->data<<" ";
        curr=curr->next;

    }
    cout<<endl;
}

node *insert_begin(node *head, int x)
{
    node *temp=new node(x);
    if(head==NULL)
    return temp;
    else
    temp->next=head;
    return temp;
}
node *insert_end(node *head, int x)
{
    node *temp=new node(x);
    node *curr=head;
    if(head==NULL)
    return temp;
    else
    while(curr->next!=NULL)
    curr=curr->next;
    curr->next=temp;
    return head;
}

node *del_begin(node *head)
{ 
    node *temp=head;
    if(head==NULL)
    return NULL;

    else
    temp=head->next;
    delete head;
    return temp;

    
}
node *del_end(node *head)
{
    node *curr=head;
    if(head==NULL)
    return NULL;
    if(head->next==NULL)
    {
    delete head;
    return NULL;

    }
    else
    while(curr->next->next!=NULL)
    {
    curr=curr->next;
    }
    delete (curr->next);
    curr->next=NULL;
    return head;


}

node *insert_nth(node *head,int x,int pos)
{
    node *temp=new node(x);
    
    if(pos==1)
    {
    temp->next=head;
    return temp;
    }
    else
    {
    node *curr=head;
    for(int i=1;i<pos-1 && curr!=NULL;i++)
    
      curr=curr->next;
      temp->next=curr->next;
      curr->next=temp;
      return head;
    
    }
}

node *del_nth(node *head,int pos)
{
    node *curr=head;
    if(head==NULL)
    return NULL;
    if(pos==1)
    {
        return del_begin(head);
    }

    else
    {
      for(int i=1;i<pos-1 && curr!=NULL;i++)
      curr=curr->next;
      node *temp=curr->next;
      curr->next=curr->next->next;
      delete temp;
      return head;

    }
}
int main()
{
    node *head=NULL;

    head=insert_begin(head, 12);
    head=insert_begin(head, 32);
    head=insert_begin(head, 22);
    printlist(head);

    head=insert_end(head,36);
    head=insert_end(head,56);
    head=insert_end(head,46);
    printlist(head);
    head=del_begin(head);
    printlist(head);

    head=del_end(head);
    printlist(head);

   head=insert_nth(head,69,3);
    printlist(head);

    head=del_nth(head, 4);
    printlist(head);
}