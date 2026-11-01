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
            cin>>v[i];
        int ans1=0;
        for(int i=0;i<n;i++)
        {
            if(i%2==0 && v[i]%2!=0 )  
            ans1++;
            if(i%2!=0 && v[i]%2==0)
            ans1++;
        }
        int ans2=0;
        for(int i=0;i<n;i++)
        {
            if(i%2==0 && v[i]%2==0 )  
            ans2++;
            if(i%2!=0 && v[i]%2!=0)
            ans2++;
        }
        cout<<min(ans1,ans2)<<endl;
    }
    return 0;
}