#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>l={1,2,7,4,6,8,9,2,3,4,3,4,5};
    list<int>l2;

    cout<<*next(l.begin(),4)<<endl;
    l.sort();
    for(int val:l)
    cout<<val<<" ";
    cout<<endl;

    l.unique();
    for(int val:l)
    cout<<val<<" ";
    cout<<endl;

    l.reverse();
    for(int val:l)
    cout<<val<<" ";
    cout<<endl;


    cout<<*next(l.begin(),4)<<endl;
    return 0;
}