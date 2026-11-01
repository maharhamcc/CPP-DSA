#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>l={1,2,3,4,5};
    list<int>l2(l);
    list<int>l3(3,10);
    for(int val:l)
    cout<<val<<endl;

    for(int val:l3)
    cout<<val<<endl;
    return 0;
}