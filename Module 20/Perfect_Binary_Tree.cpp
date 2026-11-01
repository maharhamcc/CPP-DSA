#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val)
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};

Node* input_tree()
{
    int val; 
    cin>>val;
    Node* root;
    if(val==-1)  root=NULL;
    else         root=new Node(val);

    queue<Node* >q;
    if(root)   q.push(root);

    while(!q.empty())
    {
        Node* p=q.front();
        q.pop();

        int l,r;   cin>>l>>r;
        Node* myLeft,* myRight;
        if(l==-1)  myLeft=NULL;
        else       myLeft=new Node(l);
        if(r==-1)  myRight=NULL;
        else       myRight=new Node(r);

        p->left=myLeft;
        p->right=myRight;

        if(p->left)  q.push(p->left);
        if(p->right)  q.push(p->right);
    }
    return root;
}

int count_node(Node* root)
{
    if(root==NULL)
    return 0;
    int l=count_node(root->left);
    int r=count_node(root->right);
    return l+r+1;
}

int max_dept(Node* root)
{
    if(root==NULL)
        return 0;
    if(root->left==NULL && root->right==NULL)
        return 0;
    int l=max_dept(root->left);
    int r=max_dept(root->right);
    return max(l,r)+1;
    
}
int main()
{
    Node* root=input_tree();
    int total_node=count_node(root);

    int max_depth=1+max_dept(root);

    int possible_total_node=pow(2,max_depth)-1;

    cout<<(total_node==possible_total_node? "YES":"NO");

    return 0;
}