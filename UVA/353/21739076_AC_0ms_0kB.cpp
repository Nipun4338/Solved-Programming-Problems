#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    string a,b;
    int flag;
    while(getline(cin,a))
    {
        set<string>s1;
        for(int i=0; i<a.size(); i++)
        {
            for(int j=i; j<a.size(); j++)
            {
                vector<char>v;
                char c[1000];
                for(int k=i; k<=j; k++)
                {
                    v.push_back(a[k]);
                }
                for(int k=0; k<v.size(); k++)
                {
                    if(v[k]==v[v.size()-k-1])
                    {
                        flag=0;
                    }
                    else
                    {
                        flag=1;
                        break;
                    }
                }
                if(flag==0)
                {
                    for(int k=0; k<v.size(); k++)
                    {
                        c[k]=v[k];
                    }
                }
                c[v.size()]='\0';
                s1.insert(c);
            }
        }
        cout<<"The string '"<<a<<"' contains "<<s1.size()<<" palindromes."<<endl;
    }
}
