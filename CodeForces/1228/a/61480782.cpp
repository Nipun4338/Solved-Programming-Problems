#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int a,b,c,flag,flag1;
    cin>>a>>b;
    while(a<=b)
    {
        c=a;
        vector<int>v;
        while(c!=0)
        {
            v.push_back(c%10);
            c=c/10;
        }
        sort(v.begin(),v.end());
        for(int i=0; i<v.size(); i++)
        {
            //cout<<v[i]<<endl;
            if(((upper_bound(v.begin(),v.end(),v[i])-v.begin())-(lower_bound(v.begin(),v.end(),v[i])-v.begin()))<=1)
            {
                flag=0;
            }
            else
            {
                flag=1;
                break;
            }
        }
        //cout<<a<<endl;
        if(flag==0)
        {
            cout<<a<<endl;
            flag1=1;
            return 0;
            break;
        }
        else
        {
            flag1=0;
            a++;
        }
    }
    if(flag1==0)
    {
        cout<<"-1"<<endl;
    }
}
