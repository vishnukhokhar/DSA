#include<iostream>
using namespace std;

struct Node
{
    public:
    int data;
    Node *next;
    Node (int x) //constructor
    {
        data= x;
        next =NULL;
    }
};
int main()
{
 
    Node *head = new Node(10);
    head->next= new Node(20);
    head->next->next=new Node(30);
    return 0;
}