/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int b=0,c1,e;
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
    int c=-1;
    b=0;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            b=Gcd(v[i],v[j]);
            c=max(c,b);
        }
    }
    return c;
    //v.clear();
    //return c;
    b=0;
    c=0;
}

int main()
{
    int a;
    string d;
    cin>>a;
    getchar();
    for(int i=0; i<a; i++)
    {
        getline(cin,d,'\n');
        int l=d.size();
        stringstream temp(d);
        while(temp>>c1)
        {
            v.push_back(c1);
        }
        e=gcd(v,v.size());
        cout<<e<<endl;
        v.clear();
    }
}
