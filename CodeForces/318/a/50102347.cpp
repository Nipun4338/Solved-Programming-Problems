#include<bits/stdc++.h>

int main()
{
    long long int a,b;

    scanf("%lld%lld",&a,&b);
    if(b<=((a+1)/2))
    {
        printf("%lld\n",2*b-1);
    }
    else
        printf("%lld\n",2*(b-((a+1)/2)));
    return 0;
}
