#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);        //size soho
    for(int i=0;i<n;i++)    
    cin>>v[i];

    int m;
    cin>>m;
    vector<int>v1;           // size chara
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        v1.push_back(x);    
    }

    vector<int>v2;
    int y;
    while(cin>>y)
    v2.push_back(y);

    for(auto it=v.begin();it<v.end();it++)
    cout<<*it<<" ";
    cout<<endl;

    for(auto it=v1.begin();it<v1.end();it++)
    cout<<*it<<" ";
    cout<<endl;
    
    for(auto it=v2.begin();it<v2.end();it++)
    cout<<*it<<" ";
    cout<<endl;
    return 0;
}