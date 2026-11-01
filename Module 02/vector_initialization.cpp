#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;     //type 1
    vector<int>v1(10);    //type 2
    vector<int>v2(10,-1);   //type 3
    vector<int>v3(v1);     //type 4
    vector<int>v4 = { 1,2,3,4,5 };   //type 5
    int a[5]={1,2,3,4,5};
    vector<int>v5 ={1,2,3,4,5};    //type 6
    return 0;
}