#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll n, k, t; 
ll a[100001], dp[100001];

int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    memset(dp, 0, sizeof(dp));
    memset(a, 0, sizeof(a));
    cin>>n>>k;
    for(int i=1; i<=k; i++){
        cin>>t;
        a[t]=t;
    }
    dp[1]=1;
    for(int i=2; i<=n; i++){
        if(i!=a[i]){
            dp[i]=(dp[i-1]+dp[i-2])%14062008;
        }
        else{
            dp[i]=0;
        }
    }
    cout<<(dp[n]);
    return 0;
}
