#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];
    int flag=0;
    sort(v.begin(),v.end());
    for(int i=1;i<n;i++)
    {
        if(v[i]==v[i-1])
        flag=1;
    }
    if(flag==0)
    cout<<"NO";
    else
    cout<<"YES";
    return 0;
}
