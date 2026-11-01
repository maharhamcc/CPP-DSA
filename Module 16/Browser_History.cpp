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
    myStack st,st2;
    vector<string>v;
    string s;
    while (cin>>s)
    {
        if(s=="end")
        break;
        v.push_back(s);
    }
    int n;
    cin>>n;
    cin.ignore();
    string s1;
    string word;
    while(n--)
    {
        getline(cin,s1);
        if(s1!="prev" && s1!="next")
        {
            stringstream ss(s1);
            ss>>word;
            ss>>word;
        }
        
        if(s1=="prev")
        {
            if(st.top()==v[0])
            cout<<"Not Available"<<endl;
            else
            {
                st2.push(st.top());
                st.pop();
                cout<<st.top()<<endl;
            }
            
        }
        else if(s1=="next")
        {
            if(st.top()==v[v.size()-1])
            cout<<"Not Available"<<endl;
            else
            {
                st.push(st2.top());
                st2.pop();
                cout<<st.top()<<endl;
            }
        }
        else
        {
            bool flag=false;
            for(int i=0;i<v.size();i++)
            {
                if(v[i]==word)
                {
                    flag=true;
                    break;
                }
            }
            if(flag==false)
            cout<<"Not Available"<<endl;
            else
            {   
                 for(int i=0;i<v.size();i++)
                {
                    st.push(v[i]);
                    if(v[i]==word)
                    break;
                }
                for(int i=v.size()-1;i>=0;i--)
                {
                    if(v[i]==word)
                    break;
                    st2.push(v[i]);
                }
                cout<<st.top()<<endl;
            }
        }
    }
    

    return 0;
}