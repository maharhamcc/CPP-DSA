#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    stack<int>st;
    queue<int>q;
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        st.push(val);
    }
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        q.push(val);
    }
    bool flag=true;
    if(n!=m)
    cout<<"NO";
    else
    {
        for(int j=0;j<n;j++)
        {
            if(st.top()!=q.front())
            {
                flag=false;
                break;
            }
            if(!st.empty())
            st.pop();
            if(!q.empty())
            q.pop();
        }
        if(flag==true)
        cout<<"YES";
        else
        cout<<"NO";
    }
    return 0;
}