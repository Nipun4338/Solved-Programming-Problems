/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{

    int a,b[35],c[35],sum=0;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b[i]>>c[i];
    }
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<a; j++)
        {
            if(i!=j)
            {
                if(b[i]==c[j])
                {
                    sum++;
                }
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}

