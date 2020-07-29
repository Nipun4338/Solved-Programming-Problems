// An efficient C++ program to
// count distinct elements in
// every window of size k
#include <bits/stdc++.h>
#include <map>
#define boost ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
//vector<int>v;
int ans=0;
map<int, int> hm;

void countDistinct(int arr[], int k, int n)
{
    // Creates an empty hashmap hm

    // initialize distinct element count for current window
    int dist_count = 0;

    // Traverse the first window and store count
    // of every element in hash map
    for (int i = 0; i < k; i++)
    {
        if (hm[arr[i]] == 0)
        {
            dist_count++;
        }
        hm[arr[i]] += 1;
    }

// Print count of first window

    ans=dist_count;
// Traverse through the remaining array
    for (int i = k; i < n; i++)
    {
        // Remove first element of previous window
        // If there was only one occurrence, then reduce distinct count.
        if (hm[arr[i-k]] == 1)
        {
            dist_count--;
        }
// reduce count of the removed element
        hm[arr[i-k]] -= 1;

// Add new element of current window
// If this element appears first time,
// increment distinct element count

        if (hm[arr[i]] == 0)
        {
            dist_count++;
        }
        hm[arr[i]] += 1;
        ans=min(dist_count,ans);
// Print count of current window
    }
}

int main()
{
    boost
    int a,b,c,d,e;
    cin>>a;
    while(a--)
    {
        cin>>b>>c>>d;
        int l=0,arr[b];
        while(b--)
        {
            cin>>e;
            arr[l]=e;
            hm[arr[l]]=0;
            l++;
        }
        //int size = sizeof(arr)/sizeof(arr[0]);
        int k = d;
        countDistinct(arr, k, l);
        cout<<ans<<endl;
    }
    return 0;
}

