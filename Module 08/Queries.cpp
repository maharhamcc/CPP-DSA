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

void insert_at_head(Node* &head,int val)
{
    Node* newnode=new Node(val);
    if(head == NULL)
    {
        head=newnode;
        return;
    }
    newnode->next=head;
    head=newnode;
}

void insert_at_tail(Node* &head,int val)
{
    Node* newnode=new Node(val);
    if(head==NULL)
    {
        head=newnode;
        return;
    }
    Node* tmp=head;
    while(tmp->next != NULL)
        tmp=tmp->next;
    
   tmp->next=newnode;     
    
}

void delete_at_any_position(Node* &head,int idx)
{
    Node* tmp=head;
    if(tmp == NULL)
    return;
    
    if(idx==0)
    {
        head=tmp->next;
        delete tmp;
        return;
    }
    for(int i=0;i<idx-1;i++)
    {
        if(tmp->next == NULL)
        return;
        tmp=tmp->next;
    }
    if(tmp->next==NULL)
    return;

    Node* deleteNode=tmp->next;
    tmp->next=deleteNode->next;
    delete deleteNode;
}

void print_linked_list(Node* &head)
{
    Node* tmp=head;
    while(tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
}
int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    int q;
    cin>>q;
    while(q--)
    {
        int x,v;
        cin>>x>>v;
        if(x==0)
        insert_at_head(head,v);
        else if(x==1)
        insert_at_tail(head,v);
        else if(x==2)
        delete_at_any_position(head,v);

        print_linked_list(head);
        cout<<endl;
    }
    return 0;
}