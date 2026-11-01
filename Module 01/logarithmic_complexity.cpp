#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    
    for(int i=1;i<=n;i*=2)
    sum+=i;          // complexity O(logN)

    cout<<sum<<endl;
    return 0;
}