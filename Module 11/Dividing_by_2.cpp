#include<bits/stdc++.h>
using namespace std;
void same_value(int* a,int n,int &mn,int &count)
{
    for(int i=0;i<n;i++)
        {
            while(a[i] != mn)
            {
                a[i]=a[i]/2;
                mn=min(a[i],mn);
                count++;
            }
        }
    bool flag=true;    
    for(int i=0;i<n;i++)
    {
        if(a[i]!=mn)
        flag=false;
    }    
    if(flag==true)
    return;
    else
    same_value(a,n,mn,count);

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int mn=INT_MAX;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            mn=min(mn,a[i]);
        }    
        int count=0;
        same_value(a,n,mn,count);
        cout<<count<<endl;
    }
    return 0;
}