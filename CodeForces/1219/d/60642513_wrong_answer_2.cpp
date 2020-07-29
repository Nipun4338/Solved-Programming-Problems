#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, p;
    long long int tk=0;
    cin>>n>>k;
    int a[n], c[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    cin>>p;
    for(int i=0; i<n; i++)
        cin>>c[i];
   // ft=0;
   // y=0;
    for(int i=0; i<n; i++){
       // ft=y;
        if(a[i]>k){
            if(a[i]<=k+p){
                k=k+p;
                //rt=i;
               // y=i;
                sort(c, c+i+1);
                for(int j=0; j<i+1; j++){
                    if(c[j]<1121212121){
                        tk+=c[j];
                        c[j]=1121212121;
                        break;
                    }
                    else
                    {
                        printf("-1\n");
                        return 0;
                    }
                }
            }
            else{
                printf("-1\n");
                return 0;
            }
        }
    }
    printf("%lld\n", tk);
    return 0;
}
