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
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int mx=0;
        long long int waiting_time=0;
        for(int i=1;i<n;i++)
        {
            mx=max(mx,v[i-1]);
            if(v[i]<mx)
            waiting_time+=(mx-v[i]);
        }
        cout<<waiting_time<<endl;

    }
    return 0;
}