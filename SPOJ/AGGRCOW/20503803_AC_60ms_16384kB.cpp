/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;
long long int a,arr[100001],b;

bool solve(long int k)
{
    int last_pos=arr[0],n_cows=1;
    for(int i=1; i<a; i++)
    {
        if(arr[i]-last_pos<k)
        {
            continue;
        }
        else
        {
            last_pos=arr[i];
            n_cows++;
        }
    }
    if(n_cows>=b)
    {
        return true;
    }
    return false;
}

int bin_search(long long int b1)
{
    long long int low=0;
    long long int high=1000000002;
    long long int res=-1;

    while(low<=high)
    {
        int mid=(low+high)/2;
        if(solve(mid))
        {
            low=mid+1;
            //high=mid-1;
            res=mid;
            //return mid;
        }
        else
        {
            high=mid-1;
        }
    }
    return res;
}

int main()
{
    //ofstream m;
    //m.open("ex.txt");
    long int a1;
    cin>>a1;
    for(int j=0; j<a1; j++)
    {
        cin>>a>>b;
        memset(arr,0,sizeof(arr));
        for(int i=0; i<a; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+a);
        //bin_search();
        //cout<<bin_search(b)<<endl;
        cout<<bin_search(b)<<endl;
        //cout<<"Case "<<j+1<<": "<<bin_search(1,10000001)<<endl;
    }
    //m.close();
    return 0;
}
