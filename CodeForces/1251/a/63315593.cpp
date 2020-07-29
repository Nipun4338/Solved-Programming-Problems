#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int a;
    string b;
    cin>>a;
    getchar();
    while(a--)
    {
        //getchar();
        getline(cin,b);
        set<char>s;
        int i=0;
        while(i<b.size() && b.size()>1)
        {
            if(b[i]!=b[i+1])
            {
                s.insert(b[i]);
               // cout<<i<<endl;
                i++;
            }
            else if(b[i]==b[i+1])
            {
                i=i+2;
            }
            //cout<<i;
            if(i>=b.size())
            {
                break;
            }
        }
        if(b.size()==1)
        {
            cout<<b<<endl;
        }
        else{
                vector<char>v(s.begin(),s.end());
        sort(v.begin(),v.end());
        for(int i=0; i<v.size(); i++)
        {
            cout<<v[i];
        }
        cout<<endl;
        }
    }
}
