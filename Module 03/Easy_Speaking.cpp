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
        vector<char>v(n);
        for(int i=0;i<n;i++)
        cin>>v[i];
        int count=0;
        bool is_hard=false;
        for(int i=0;i<n;i++)
        {
            if(v[i]=='a' || v[i]=='e' || v[i]=='i' || v[i]=='o' || v[i]=='u')
            count=0;
            else
            count++;
            if(count>=4)
            is_hard=true;
        }
        if(is_hard==true)
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
    }
    return 0;
}