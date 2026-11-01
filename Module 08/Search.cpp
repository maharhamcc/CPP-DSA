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

void print_idx(Node* &head,int x)
{
    int idx=0;
    bool is_exist=false;
    for(Node* i=head;i !=NULL;i=i->next)
    {
        if(i->val==x)
        {
            is_exist=true;
            break;
        }
        idx++;
    }
    if(is_exist==true)
    cout<<idx<<endl;
    else
    cout<<"-1"<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
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
    int x;
    cin>>x;
    print_idx(head,x);
    }
    return 0;
}