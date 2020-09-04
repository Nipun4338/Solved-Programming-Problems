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

ll binarySearch(ll arr[], ll l, ll r, ll x)
{
    while (l <= r)
    {
        int m = l + (r - l) / 2;

        // Check if x is present at mid
        if (arr[m] == x)
            return m;

        // If x greater, ignore left half
        if (arr[m] < x)
            l = m + 1;

        // If x is smaller, ignore right half
        else
            r = m - 1;
    }

    // if we reach here, then element was
    // not present
    return -1;
}

ll power(ll x, unsigned long long int y, ll p)
{
    ll res = 1;     // Initialize result

    x = x % p; // Update x if it is more than or
    // equal to p

    if (x == 0)
        return 0; // In case x is divisible by p;

    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;

        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;
    }
    return res;
}


int main()
{
    fast

    ll a,b,c,d,e,f,g,h;
    string x;
    cin>>x;
    deque<char>de;
    deque<ll>dl;
    map<char,ll>m;
    ll ans=0,ans1=0,flag=0;
    m['C']=12;
    m['H']=1;
    m['O']=16;
    ll ans3=0;
    for(int i=0; i<x.size(); i++)
    {
        if(x[i]=='0')
        {
            continue;
        }
        if(x[i]>='A' && x[i]<='Z' && flag==0)
        {
            ans=m[x[i]];
            ans1+=ans;
        }
        else if(x[i]>='1' && x[i]<='9' && flag==0)
        {
            ll temp=x[i]-'0';
            temp--;
            ans=ans*temp;
            ans1+=ans;
        }
        else if(x[i]=='(')
        {
            flag=1;
            //cout<<flag<<endl;
            de.push_back(x[i]);
        }
        else if(flag==1 && x[i]>='A' && x[i]<='Z')
        {
            dl.push_back(m[x[i]]);
            de.push_back('0');
        }
        else if(flag==1 && x[i]>='1' && x[i]<='9')
        {
            ll temp=x[i]-'0';
            ll temp2=dl.back();
            dl.pop_back();

            temp2*=temp;
            //cout<<temp2<<endl;
            dl.push_back(temp2);
        }
        else if(x[i]==')')
        {
            ll ans2=0;
            if(i+1<x.size() && x[i+1]>='1' && x[i+1]<='9')
            {
                ll temp=x[i+1]-'0';
                while(de.back()!='(')
                {
                    ans2+=(dl.back()*temp);
                    de.pop_back();
                    dl.pop_back();
                }
                x[i+1]='0';
                de.pop_back();
                if(de.empty())
                {
                    if(!dl.empty())
                    {
                        while(!dl.empty())
                        {
                            ans2+=(dl.back()*temp);
                            dl.pop_back();
                        }
                    }
                    ans1+=ans2;
                    flag=0;
                }
                else
                {
                    dl.push_back(ans2);
                    de.push_back('0');
                }
            }
            else
            {
                ll ans2=0;
                while(de.back()!='(')
                {
                    ans2+=dl.back();
                    de.pop_back();
                    dl.pop_back();
                }
                de.pop_back();
                //cout<<ans2<<endl;
                if(de.empty())
                {
                    if(!dl.empty())
                    {
                        while(!dl.empty())
                        {
                            ans2+=dl.back();
                            dl.pop_back();
                        }
                    }
                    ans1+=ans2;
                    flag=0;
                }
                else
                {
                    dl.push_back(ans2);
                    de.push_back('0');
                }
            }
        }
        //cout<<ans1<<endl;
    }
    cout<<ans1<<endl;

}
/*Remember Remember, if you are so much excited that
your mind is shaking,
this is not the last contest that you are proceeding now,
if Almighty wants,
time will come.*/
