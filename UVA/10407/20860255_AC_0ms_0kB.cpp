/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int b=0,c1,e,flag;
vector<int>v;
int Gcd(int a, int b)
{
    if(b==0)
    {
        return a;
    }
    return Gcd(b,a%b);
}

/*int Lcm(int a, int b)
{
    return ((a/Gcd(a,b))*b);
}*/

int gcd(vector<int>v,int n)
{
    int c=0;
    b=0;
    for(int i=0; i<n-1; i++)
    {
        c=abs(max(v[i],v[i+1])-min(v[i],v[i+1]));
        b=Gcd(b,c);
    }
    return b;
    //v.clear();
    //return c;
    b=0;
    c=0;
}

int main()
{
    int a,b;
    while(cin>>a)
    {
        if(a==0)
        {
            break;
        }
        else
        {
            v.push_back(a);
            while(cin>>b)
            {
                if(b!=0)
                {
                    v.push_back(b);
                }
                else if(b==0 && v.size()!=0)
                {
                    int e=gcd(v,v.size());
                    cout<<e<<endl;
                    v.clear();
                }
                else
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            {
                break;
            }
        }
    }
}
