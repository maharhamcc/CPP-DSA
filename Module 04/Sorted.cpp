#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        cin>>a[i];
        vector<int>b(n);
        b=a;
        sort(a.begin(),a.end());
        bool is_sorted=true;
        for(int i=0;i<n;i++)
        {
            if(b[i]!=a[i])
            is_sorted=false;
        }
        if(is_sorted==false)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
    return 0;
}