#include<bits/stdc++.h>
using namespace std;
struct Node
{
    Node *next;
    Node *prev;
    int data;
    Node(int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
};

printlist(Node *head)
{
    Node *curr=head;
    while(curr!=NULL)
    {
        cout<<curr->data<<" ";
        curr=curr->next;

    }cout<<endl;
}

Node *insert_begin(Node *head, int x)
{
    Node *temp=new Node(x);
    if(head==NULL)
    return NULL;
    else
    temp->next=head;
    return temp;
}

Node *insert_end(Node *head, int x)
{
    Node *temp=new Node(x);
    Node *curr=head;
    if (head==NULL)
    {
        return temp;
    }
    else
    {
        while(curr->next!=NULL)
        {
            curr=curr->next;
        }
        curr->next=temp;
        return head;
    }

}
Node *del_begin(Node *head)
{
    if(head==NULL)
    {
        return NULL;
    }
    else
    {
   Node *temp=head;
   head=head->next;
   delete temp;
   return head;
    }

}

Node *del_end(Node *head)
{
   if(head==NULL)
   {
       return NULL;
   }

   if(head->next==NULL)
   {
       delete head;
       return NULL;
   }
   else
   {
       Node *curr=head;
       while(curr->next->next!=NULL)
       {
           curr=curr->next;
       }
       delete curr->next;
       curr->next=NULL;
       return head;
   }
}

Node *reverse_dll(Node *head)
{
    
   Node *curr=head;
   Node *temp=NULL;
   if(head==NULL || head->next==NULL)
   return head;

   while(curr!=NULL)
   {
       temp=curr->prev;
       curr->prev=curr->next;
       curr->next=temp;
       curr=curr->prev;
   }
   return temp->prev;

}


int main()
{
    Node *head=new Node(30);
    Node *temp1=new Node(12);
    head->next=temp1;
    temp1->prev=head;
    printlist(head);
    head=insert_begin(head,55);
    printlist(head);
    head=insert_end(head,69);
    printlist(head);
    
    head=del_begin(head);
    printlist(head);
    head=del_end(head);
    printlist(head);
    head=insert_end(head,220);
    head=insert_end(head,221);
    head=insert_end(head,222);
    printlist(head);
    head=reverse_dll(head);
    printlist(head);
}