#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string g;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a,b,c,flag,d,flag1,e=0,f=0;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b;
        vector<int> v,v2;
        set<int> s;
        for(int j=0; j<4*b; j++)
        {
            cin>>c;
            v.push_back(c);
            s.insert(c);
        }
        sort(v.begin(),v.end());
        std::vector<int>v1(s.begin(),s.end());
        //int sum=0;
        int area=v[0]*v[v.size()-1];
        for (int j = 0; j < b; j++)
        {
            int lf = j * 2, rg = 4 * b - (j * 2) - 1;
            if (v[lf] != v[lf + 1] || v[rg] != v[rg - 1] || v[lf] * 1ll * v[rg] != area)
            {
                flag=1;
                break;
            }
            else
            {
                flag=0;
            }
        }
        //cout<<sum<<endl;
        for(int j=0; j<v1.size(); j++)
        {
            e=upper_bound(v.begin(),v.end(),v1[j])-v.begin();
            f=lower_bound(v.begin(),v.end(),v1[j])-v.begin();
            //cout<<e<<" "<<f<<endl;
            if((e-f)==2*b || (e-f)<=b*4)
            {
                flag1=0;
            }
            else
            {
                flag1=1;
                break;
            }
        }
        if(flag==0 && flag1==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
