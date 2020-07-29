#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d=0;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b>>c;
        d=(b-1)*9+c;
        cout<<d<<endl;
        d=0;
    }
	return 0;
}
