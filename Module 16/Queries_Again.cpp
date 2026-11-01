#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};

void insert_at_any_position(Node* &head,int val,int idx)
{
    Node* newnode=new Node(val);
    if(idx==0)
    {
        newnode->next=head;
        if(head != NULL)
            head->prev=newnode;       
        head=newnode;
        return;
    }
    Node* tmp=head;
    for(int i=0;i<idx-1;i++)
    {
        tmp=tmp->next;
    }
    newnode->next=tmp->next;
    newnode->prev=tmp;
    if(tmp->next!=NULL)
    tmp->next->prev=newnode;
    tmp->next=newnode;
}

int sz(Node* tmp)
{
    int size=0;
    while(tmp!=NULL)
    {
        tmp=tmp->next;
        size++;
    }
    return size;
}

void print_forward(Node* tmp)
{
    cout<<"L -> ";
    while(tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
void print_backward(Node* tmp)
{
    cout<<"R -> ";
    while(tmp->next!= NULL)
    {
        tmp=tmp->next;
    }
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->prev;
    }
    cout<<endl;
}
int main()
{
    Node* head=NULL;
    int t;
    cin>>t;
    while(t--)
    {
        int x,v;
        cin>>x>>v;
        int size=sz(head);
        if(x>size)
        cout<<"Invalid"<<endl;
        else
        {
        insert_at_any_position(head,v,x);
        print_forward(head);
        print_backward(head);
        }
    }
    return 0;
}