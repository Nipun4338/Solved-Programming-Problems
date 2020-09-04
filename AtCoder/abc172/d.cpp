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


int status[100000000/32];
bool Check(int N,int pos)
{
    return (bool)(N & (1<<pos));
}
int Set(int N,int pos)
{
    return N=N | (1<<pos);
}
long long int arr[100000000];
long long int l=0,a,b=10000001,n;


void sieve()
{
    long long int i,j,sqrtN;
    sqrtN = int( sqrt( b ) );
    for( i=3; i<=sqrtN; i+=2 )
    {
        if( Check(status[i/32],i%32)==0)
        {
            for(j=i*i; j<=b; j+=2*i)
            {
                status[j/32]=Set(status[j/32],j%32);
            }
        }
    }
    arr[0]=2;
    l=1;
    for(i=3; i<=b; i+=2)
    {
        if(Check(status[i/32],i%32)==0)
        {
            arr[l]=i;
            l++;
        }
    }
}

long long int p[10000000];
long long int e[10000000];
int nk=0;

void decomp(long long int a)
{
    long long int sqrtA=sqrt(a);
    for(long long int i=0; i<l && arr[i]<=sqrtA; i++)
    {
        int count=0;
        /*if(Check(status[a/32],a%32)==0)
        {
            break;
        }*/
        if(a%arr[i]==0)
        {
            while(a%arr[i]==0)
            {
                count++;
                a=a/arr[i];
            }

            if(count>0)
            {
                p[nk]=arr[i];
                e[nk]=count;
                nk++;
            }
        }
        sqrtA=sqrt(a);
    }
    if(a!=1)    ///for last prime
    {
        p[nk]=a;
        e[nk]=1;
        nk++;
    }
}

int main()
{
    sieve();  ///sieve must be out of any loop

    long long int a,b=1,c,k=0,d,l=0;
    cin>>c;
    ll ans=0;
    for(long long int j=1; j<=c; j++)
    {
        decomp(j);
        for(int x=0; x<nk; x++)
        {
            b=b*(e[x]+1);
            //cout<<b<<endl;
        }
        if(k<b)
        {
            k=b;
            l=a;
        }
        b=1;
        nk=0;
        ans+=(k*j);
        //memset(p,0,sizeof(p));
        //memset(e,0,sizeof(e));
        nk=0;
        l=0;
        k=0;
    }
    cout<<ans<<endl;
    return 0;
}
/*Remember Remember, if you are so much excited that
your mind is shaking,
this is not the last contest that you are proceeding now,
if Almighty wants,
time will come.*/
