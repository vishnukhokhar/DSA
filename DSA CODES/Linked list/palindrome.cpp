// { Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};




 // } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/


class Solution{
  public:
  
Node *rev(Node *head)
{
    Node *prev=NULL;
    Node *nex;
    Node *curr=head;
    while(curr!=NULL)
    {
        nex=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nex;
    }
    return prev;
}

    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        //Your code here
        if(head==NULL || head->next==NULL)
        return 1;
        Node *slow,*fast;
        slow=fast=head;
        
        while(fast->next!=NULL && fast->next->next!=NULL)
        {
            slow = slow->next;
            fast=fast->next->next;
        }
        slow=rev(slow->next);
        fast=head;
        
        while(slow)
        {
            if(slow->data!=fast->data)
            return 0;
            slow=slow->next;
            fast=fast->next;
        }
        
        return 1;
     
    }
};



// { Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}

  // } Driver Code Ends