#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={1,2,3,4,2,6,7,2,9};
    vector<int>v2;
    v2=v;
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    cout<<endl;
    for(int i=0;i<v2.size();i++)
    cout<<v2[i]<<" ";
    cout<<endl;


    v.erase(v.begin()+4);
    v.erase(v.begin()+6);
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    cout<<endl;
    v.insert(v.begin()+4,5);
    v.insert(v.begin()+7,8);
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    cout<<endl;

    replace(v.begin(),v.end(),5,500);
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    cout<<endl;

    auto it=find(v.begin(),v.end(),500);
    cout<< (it==v.end() ? "Not found":"Found");

    return 0;
}