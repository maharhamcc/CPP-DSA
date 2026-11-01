#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    cout<<v.size()<<endl;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    v.clear();
    cout<<v.size()<<endl;
    cout<<v[4]<<endl;
    v.push_back(40);
    v.push_back(50);
    cout<<v[1]<<endl;
    v.resize(10,100);
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    cout<<endl;
    v.resize(3);
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    cout<<endl;
    return 0;
}