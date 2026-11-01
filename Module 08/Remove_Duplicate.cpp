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

void delete_same_node(Node* &head)
{
    for(Node* i=head;i!=NULL;i=i->next)
    {
        Node* tmp=i;
        for(Node* j=i->next;j!=NULL;)
        {
            if(i->val==j->val)
            {
                tmp->next=j->next;
                delete j;
                j=tmp->next;
            }
            else
            {
                tmp=j;
                j=tmp->next;
            }    
        }
    }
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
    int val;
    while(cin>>val)
    {
        if(val==-1)
        break;
        insert_at_tail(head,tail,val);
    }
    delete_same_node(head);
    print_linked_list(head);
    return 0;
}