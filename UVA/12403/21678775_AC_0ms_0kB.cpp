#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,sum=0,c;
    char b[7];
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b;
        if(strcmp(b,"donate")==0)
        {
            cin>>c;
            sum=sum+c;
        }
        else if(strcmp(b,"report")==0)
        {
            cout<<sum<<endl;
        }
    }
    return 0;

}
