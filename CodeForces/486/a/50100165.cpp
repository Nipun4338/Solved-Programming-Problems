#include<bits/stdc++.h>

int main()
{
    long long int a,sum=0;
    scanf("%lld",&a);
    if(a%2==0)
        {
            sum=a/2;
        }
    else if(a%2==1)
        {
            sum=-(a+2)/2;
        }
    printf("%lld\n",sum);
    return 0;
}
