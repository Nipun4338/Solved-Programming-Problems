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
if(a>2){
for(int i=0; i<a-1; i++)
{
if(strcmp(b[i],b[i+1])!=0)
{
c++;
}
}
cout<<c<<endl;}
else if(a==1)
{
cout<<"1"<<endl;
}
else if(a==2)
{
if(strcmp(b[i],b[i+1])!=0)
{
cout<<"2"<<endl;
else
cout<<"1"<<endl;
}
return 0;
}