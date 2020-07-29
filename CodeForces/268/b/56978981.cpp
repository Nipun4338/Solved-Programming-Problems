/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int a,sum=0;
	cin>>a;
	for(int i=1; i<=a; i++)
    {
        sum=sum+((a-i)*i);
    }
    cout<<sum+a<<endl;
}
