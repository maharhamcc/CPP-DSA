#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>l={1,2,7,4,6,8,9,2,3,4,3,4,5};
    list<int>l2;

    cout<<*next(l.begin(),4)<<endl;

    cout<<l.back()<<endl;
    cout<<l.front()<<endl;
    cout<<*l.begin()<<endl;
    cout<<*l.end()<<endl;
    return 0;
}