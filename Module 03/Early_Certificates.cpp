#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<char>a(n);
        for(int i=0;i<n;i++)
        cin>>a[i];
        vector<char>b(m);
        for(int i=0;i<m;i++)
        cin>>b[i];
        int x=min(n,m);
        for(int i=0;i<x;i++)
        {
            if(a[i]==b[i])
            cout<<a[i];
            else
            break;
        }
        cout<<endl;
    }
    return 0;
}