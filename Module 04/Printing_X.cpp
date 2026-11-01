#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int space1=0,space2=n-2;
    if(n==1)
    cout<<"X";
    else
    {
        for(int i=1;i<=(n/2);i++)
        {
            for(int j=1;j<=space1;j++)
            cout<<" ";
            cout<<"\\";
            for(int j=1;j<=space2;j++)
            cout<<" ";
            cout<<"/";
            space1++;
            space2=space2-2;
            cout<<endl;
        }
        for(int i=1;i<=(n/2);i++)
        cout<<" ";
        cout<<"X";
        cout<<endl;
        space1--;
        space2+=2;
        for(int i=1;i<=(n/2);i++)
        {
            for(int j=1;j<=space1;j++)
            cout<<" ";
            cout<<"/";
            for(int j=1;j<=space2;j++)
            cout<<" ";
            cout<<"\\";
            space1--;
            space2=space2+2;
            cout<<endl;
        }
    }
    return 0;
}