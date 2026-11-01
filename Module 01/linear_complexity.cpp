#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    
    // for(int i=1;i<=n;i++)
    // sum+=i;          // ata hole puro code er  complexity O(N)

    sum=n*(n+1)/2;       // ata hole O(1)
    cout<<sum<<endl;
    return 0;
}