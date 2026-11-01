#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
void insert_at_tail(Node* &head,Node* &tail,int val)
{
    Node* newnode=new Node(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
}

void print_diff(Node* &head)
{
    int mx=INT_MIN;
    int mn=INT_MAX;
    for(Node* i=head;i != NULL;i=i->next)
    {
        mx=max(mx,i->val);
        mn=min(mn,i->val);
    }
    cout<<abs(mx-mn)<<endl;
}
int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    int val;
    while(cin>>val)
    {
        if(val==-1)
        break;
        insert_at_tail(head,tail,val);
    }
    print_diff(head);
    return 0;
}