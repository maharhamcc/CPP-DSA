#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>l={1,2,3,4,5};
    list<int>l2(l);

    l2.clear();
    cout<<l2.size()<<endl;

    if(l2.empty())
    cout<<"Empty"<<endl;

    l2.resize(10,7);
    for(int val:l2)
    cout<<val<<" ";
    return 0;
}