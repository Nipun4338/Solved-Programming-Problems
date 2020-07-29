#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d[105]={0},sum=0;
    cin>>a>>b;
    for(int i=0; i<a; i++)
    {
        cin>>c;
        d[c%b]++;
    }
    sum=sum+(d[0]/2);
    if(b%2==0)
    {
        sum=sum+((d[b/2])/2);
    }
    for(int i=1; i<(b+1)/2; i++)
    {
        sum=sum+min(d[i],d[b-i]);
    }
    cout<<2*sum<<endl;
	return 0;
}
