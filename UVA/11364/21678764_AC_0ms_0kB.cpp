#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b[20],c,d=0,sum=0;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>c;
        for(int j=0; j<c; j++)
        {
            cin>>b[j];
        }
        for(int j=0; j<c; j++)
        {
            for(int l=j+1; l<c; l++)
            {
                if(b[j]>=b[l])
                {
                    d=b[j];
                    b[j]=b[l];
                    b[l]=d;
                }
            }
        }
        for(int k=0; k<c-1; k++)
        {
            sum=sum+(b[k+1]-b[k]);
        }
        cout<<sum*2<<endl;
        d=0;
        sum=0;
    }
    return 0;

}