#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,c=2;
    cin>>a;
    if(a%2==0 && a%4==0)
    {
        cout<<a<<endl;
    }
    else if(a%2==0 && a%4!=0)
    {
        cout<<a+2<<endl;
    }
    else if(a%2==1)
    {
        cout<<"0"<<endl;
    }
	return 0;
}
