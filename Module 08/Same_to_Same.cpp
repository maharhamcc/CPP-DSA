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

void print_same_or_not(Node* &head,Node* &head2,int count1,int count2)
{
    Node* i=head;
    Node* j=head2;
    bool is_same=true;
    for(;i!=NULL,j!=NULL;i=i->next,j=j->next)
    {
        if(count1 != count2)
        {
            is_same=false;
            break;
        }
        else
        {
            if(i->val != j->val)
            {
                is_same=false;
                break;
            }
        }
    }
    if(is_same==true)
    cout<<"YES";
    else
    cout<<"NO";
}
int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    int val;
    int count1=0;
    while(cin>>val)
    {
        if(val==-1)
        break;
        insert_at_tail(head,tail,val);
        count1++;
    }
    Node* head2 = NULL;
    Node* tail2 = NULL;
    int val2;
    int count2=0;
    while(cin>>val2)
    {
        if(val2==-1)
        break;
        insert_at_tail(head2,tail2,val2);
        count2++;
    }
    print_same_or_not(head,head2,count1,count2);
    return 0;
}