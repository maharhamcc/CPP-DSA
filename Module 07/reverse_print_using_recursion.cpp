#include<bits/stdc++.h>
using namespace std;
void rec(int i,int n)
{
    if(i>n)
    return;
    rec(i+1,n);
    cout<<i<<endl;
}
int main()
{
    int i,n;
    cin>>i>>n;
    rec(i,n);
    return 0;
}