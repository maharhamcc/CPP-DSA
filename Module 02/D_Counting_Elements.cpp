#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);    
    for(int i=0;i<n;i++)    
    cin>>v[i];
    int count=0;
    int x=v[0];
    for(int i=1;i<n;i++)
    {
        if(x+1==v[i])
        {
            count++;
            x++;
        }
        else if(x==v[i])
        {
            count++;
        }    
        else
        count--;
    }
    if(count<=0)
    cout<<"0";
    else
    cout<<count;
    return 0;
}