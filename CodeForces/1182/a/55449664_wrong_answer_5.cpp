#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b[35],c=2;
    for(int i=1; i<30; i++)
    {
        b[i]=c;
        c=c*2;;
    }
    cin>>a;
    if(a%2==0)
    {
        cout<<b[a/2]<<endl;
    }
    else if(a%2==1)
    {
        cout<<"0"<<endl;
    }
	return 0;
}
