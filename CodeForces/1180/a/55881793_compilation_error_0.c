#include<bits/stdc++.h>
#include<boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;
int main()
{
    int a;
    cpp_int sum=1,c[105],b=4;
    c[0]=1;
    for(int i=1; i<100; i++)
    {
        sum=sum+b;
        c[i]=sum;
        b=b*2;
    }
    cin>>a;
    cout<<c[a-1]<<endl;
    return 0;
}
