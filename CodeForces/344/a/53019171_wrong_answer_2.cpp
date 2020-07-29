#include<bits/stdc++.h>
using namespace std;
int main()
{
char b[100000][3];
int a,c=0;
cin>>a;
for(int i=0; i<a; i++)
{
gets(b[i]);
}
for(int i=0; i<a-1; i++)
{
if(strcmp(b[i],b[i+1])!=0)
{
c++;
}
}
cout<<c<<endl;
return 0;
}