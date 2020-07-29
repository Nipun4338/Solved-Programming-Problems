#include<bits/stdc++.h>
#include<boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;
int main()
{
    long long int c=0,sum=0;
    cpp_int a=0;
    cpp_int b=1;
    cpp_int d=0;
    while(cin>>c){
    while(sum!=c && c!=1 && c!=0)
    {
        d=a+b;
        a=b;
        b=d;
        sum++;
    }
    if(c==0)
    {
        cout<<"The Fibonacci number for "<<c<<" is 0"<<endl;
    }
    else if(c==1)
    {
        cout<<"The Fibonacci number for "<<c<<" is 1"<<endl;
    }
    else
    {
        cout<<"The Fibonacci number for "<<c<<" is "<<a<<endl;
    }
    a=0;
    b=1;
    d=0;
    sum=0;
    }
    return 0;
}