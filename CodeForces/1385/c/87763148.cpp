#include<bits/stdc++.h>
#define rep0(i,n) for(i=0;i<n;i++)
#define rep(i,n) for(i=1;i<=n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define mem(ara,n) memset(ara,n,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define fast ios_base:: sync_with_stdio( false ); cin.tie(0); cout.tie(0);
#define eb              emplace_back
#define em              emplace
#define pb              push_back
#define Mp              make_pair
#define ff              first
#define ss              second
#define mod 1000000007
# define M_PI           3.14159265358979323846
typedef long long ll;
using namespace std;

const int M = (int)(2e6 + 239);

void decitobinbitodeci()
{
    string binary = bitset<8>(128).to_string(); //to binary
    cout<<binary<<"\n";

    unsigned long decimal = bitset<8>(binary).to_ulong();
    cout<<decimal<<"\n";
}

int getnum(string a)
{
    int i,p=0;
    rep0(i,a.size())
    {
        p*=10;
        p+=a[i]-'0';
    }
    return p;
}

/*
1.always remember for ncr(n,2), you can calculate by
n*(n-1)/2
2.Power of 2 ->  (1ll<<i)
*/

ll getOddOccurrence(ll ar[], int ar_size)
{
    ll res = 0;
    for (int i = 0; i < ar_size; i++)
        res = res ^ ar[i];

    return res;
}

bool areEqual(int arr1[], int arr2[], int n, int m)
{
    // If lengths of arrays are not equal
    if (n != m)
        return false;

    // Store arr1[] elements and their counts in
    // hash map
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
        mp[arr1[i]]++;

    // Traverse arr2[] elements and check if all
    // elements of arr2[] are present same number
    // of times or not.
    for (int i = 0; i < n; i++)
    {
        // If there is an element in arr2[], but
        // not in arr1[]
        if (mp.find(arr2[i]) == mp.end())
            return false;

        // If an element of arr2[] appears more
        // times than it appears in arr1[]
        if (mp[arr2[i]] == 0)
            return false;

        mp[arr2[i]]--;
    }

    return true;
}

int countSubstring(const std::string& str, const std::string& sub)
{
    if (sub.length() == 0) return 0;
    int count = 0;
    for (size_t offset = str.find(sub); offset != std::string::npos;
	 offset = str.find(sub, offset + sub.length()))
    {
        ++count;
    }
    return count;
}


int main()
{
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif*/
    fast

    ll a,b,c,d,e;
    cin>>a;
    while(a--)
    {
        cin>>b;
        vector<ll>v;
        for(int i=0; i<b; i++)
        {
            cin>>c;
            v.push_back(c);
        }
        if(b<=2)
        {
            cout<<0<<endl;
            continue;
        }
        ll ans=0,temp=-2,temp1=-1;
        ll i=0;
        for(i=b-1; i>=1; i--)
        {
            if(v[i]<=v[i-1])
            {
                ans++;
            }
            else
            {
                temp1=i;
                break;
            }
        }
        for(int j=i; j>=0; j--)
        {
            if(v[j]>=v[j-1])
            {
                ans++;
            }
            else
            {
                temp1=i;
                break;
            }
        }
        ans++;
        ans=b-ans;
        if(ans<0)
        {
            ans=0;
        }
        cout<<ans<<endl;
    }
}
/*Remember Remember, if you are so much excited that
your mind is shaking,
this is not the last contest that you are proceeding now,
if Almighty wants,
time will come.*/
