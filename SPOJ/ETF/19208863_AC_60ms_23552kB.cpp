#include<bits/stdc++.h>
using namespace std;
long long int phi[1000000];
void phiSeive()
{
    for(int i=0; i<=1000000; i++)
    {
        phi[i]=i;
    }
    for(int i=2; i<=1000000; i++)
    {
        if(phi[i]==i)
        {
            phi[i]=i-1;
            for(int j=i*2; j<=1000000; j+=i)
            {
                phi[j]=(phi[j]/i)*(i-1);
            }
        }
    }
    /*for(int k=1; k<=1000; k++)
    {
        cout<<phi[k]<<endl;
    }*/
}
int main()
{
    int a,b;
    phiSeive();
    cin>>a;
        for(int i=0; i<a; i++)
        {
            cin>>b;
            cout<<phi[b]<<endl;
        }
    return 0;
}
