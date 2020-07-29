#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,sum,sum1;
    string c;
    while(cin>>a)
    {
        if(a==0)
        {
            break;
        }
        getchar();
        getline(cin,c);
        vector<int>v;
        sum=10e9;
        sum1=10e9;
        for(int i=0; i<a; i++)
        {
            if(c[i]=='Z')
            {
                v.push_back(0);
                break;
            }
            else if(c[i]=='R')
            {
                sum1=i+1;
                v.push_back(abs(sum-sum1));
            }
            else if(c[i]=='D')
            {
                sum=i+1;
                v.push_back(abs(sum-sum1));
            }
        }
        sort(v.begin(),v.end());
        cout<<v[0]<<endl;
    }
}
