#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>l={1,2,3,4,5};
    list<int>l2;

    l2.assign(l.begin(),l.end());
    l2.push_back(6);
    l2.push_back(6);
    l2.push_front(6);

    replace(l2.begin(),l2.end(),6,0);

    auto it=find(l2.begin(),l2.end(),5);
    if(it ==l2.end())
    cout<<"Not Found"<<endl;
    else
    cout<<"Found"<<endl;

    l2.insert(next(l2.begin(),6),6);

    for(int val:l2)
    cout<<val<<" ";
    cout<<endl;

    cout<<*next(l2.begin(),2)<<endl;
    return 0;
}