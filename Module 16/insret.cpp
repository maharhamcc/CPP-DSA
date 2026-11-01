#include<bits/stdc++.h>
using namespace std;
class myStack
{
    public:
    list<string>l;
    void push(string s)
    {
        l.push_back(s);
    }
    void pop()
    {
        l.pop_back();
    }
    string top()
    {
        return l.back();
    }
    int size()
    {
        return l.size();
    }
    bool empty()
    {
        return l.empty();
    }
};
int main()
{
    myStack st;
    myStack tmp;
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    while (ss >> word)
    {
        if(word=="end")
        break;
        tmp.push(word);
    }
    while(!tmp.empty())
    {
        st.push(tmp.top());
        tmp.pop();
    }
    int n;
    cin>>n;
    while(n--)
    {
        string s1;
        getline(cin,s1);
        stringstream ss1(s1);
        string word1;
        while (ss1 >> word1)
        cout<<word1<<" ";
        cout<<endl;
    }
    

    return 0;
}