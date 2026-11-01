#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        int count=0;
        for(int i=0;i<n;i++)
        {
            int l=0,r=0;
            for(int j=0;j<i;j++)
            {
                if(a[j]<a[i])
                l++;
            }
            for(int j=i+1;j<n;j++)
            {
                if(a[j]>a[i])
                r++;
            }
            if(l==r)
            count++;

        }
        cout<<count<<endl;
    }
    return 0;
}