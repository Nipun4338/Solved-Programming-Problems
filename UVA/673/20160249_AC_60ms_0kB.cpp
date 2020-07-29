/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,flag;
    cin>>a;
    getchar();
    for(int i=0; i<a; i++)
    {
    string b;
    getline(cin,b);
    stack<char> st;
    for(int i=0; i<b.size(); i++)
    {
        if(b[i]=='(' || b[i]=='[' || b[i]==' ')
        {
            st.push(b[i]);
        }
        else if(b[i]==')')
        {
            if(!st.empty() && st.top()=='(')
            {
                st.pop();
            }
            else
            {
                st.push(b[i]);
            }
        }
        else if(b[i]==']')
        {
            if(!st.empty() && st.top()=='[')
            {
                st.pop();
            }
            else
            {
                st.push(b[i]);
            }
        }
    }
    if(st.empty())
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    }
    return 0;
}
