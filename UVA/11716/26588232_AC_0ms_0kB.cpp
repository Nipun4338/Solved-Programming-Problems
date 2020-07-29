#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,c=0,d=0;
    char b[10010];
    cin>>a;
    getchar();
    for(int i=0; i<a; i++)
    {
        gets(b);
        c=strlen(b);
        d=sqrt(c);
        if(d*d!=c)
        {
            cout<<"INVALID"<<endl;
        }
        else if(d*d==c)
        {
            for(int j=0; j<d; j++)
            {
                for(int k=j; k<c; k+=d)
                {
                    cout<<b[k];
                }
            }
            cout<<endl;
        }
    }
    return 0;
}
