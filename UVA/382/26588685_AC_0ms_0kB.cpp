/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a,b,c,sum=0;
    int v[100000];
    int flag=1;
    while(cin>>a)
    {
        if(flag==1)
        {
            cout<<"PERFECTION OUTPUT"<<endl;
            flag=0;
        }
        if(a==0)
        {
            break;
        }
        int l=0;
        v[l]=a;
        l++;
        for(int i=0; i<l; i++)
        {
            for(int j=0; j<v[i]/2; j++)
            {
                if(v[i]%(j+1)==0)
                {
                    sum+=j+1;
                }
            }
            //cout<<sum<<endl;
            if(sum==v[i])
            {
                cout<<setw(5)<<v[i]<<"  "<<"PERFECT"<<endl;
            }
            else if(sum>v[i])
            {
                cout<<setw(5)<<v[i]<<"  "<<"ABUNDANT"<<endl;
            }
            else if(sum<v[i])
            {
                cout<<setw(5)<<v[i]<<"  "<<"DEFICIENT"<<endl;
            }
            sum=0;
        }
    }
    cout<<"END OF OUTPUT"<<endl;
}
