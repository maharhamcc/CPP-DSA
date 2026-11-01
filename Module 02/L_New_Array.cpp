#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];
    vector<int>v1(n);
    for(int i=0;i<n;i++)
    cin>>v1[i];
    for(int i=0;i<n;i++)
    cout<<v1[i]<<" ";
    for(int i=0;i<n;i++)
    cout<<v[i]<<" ";
    return 0;
}