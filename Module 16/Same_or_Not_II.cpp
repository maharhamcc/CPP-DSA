#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int s[n];
    int q[m];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>q[i];
    }
    bool flag=true;
    if(n!=m)
    cout<<"NO";
    else
    {
        for(int j=n-1,k=0;j>=0,k<m;j--,k++)
        {
            if(s[j]!=q[k])
            flag=false;
        }
        if(flag==true)
        cout<<"YES";
        else
        cout<<"NO";
    }
    return 0;
}