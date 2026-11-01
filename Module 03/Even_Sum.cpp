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
        int sum=0;
        for(int i=0;i<n;i++)
        sum+=v[i];
        bool is_odd=true;
        for(int i=0;i<n;i++)
        {
            if((sum-v[i])%2==0)
            {
                is_odd=false;
                break;
            }
        }
        if(is_odd==false)
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
    }
    return 0;
}