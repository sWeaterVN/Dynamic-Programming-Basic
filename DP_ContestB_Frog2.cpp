#include<bits/stdc++.h>
using namespace std;
int n, k;
int h[100001], dp[100001];

int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin>>n>>k;
    for(int i=1; i<=n; i++){
        cin>>h[i];
    }
    dp[1]=0;
    for(int i=2; i<=n; i++){
        dp[i] = 1e9;
        for(int j=1; j<=k && i-j>=1; j++){
            dp[i]=min(dp[i], dp[i-j] + abs(h[i]-h[i-j]));
        }
    }
    cout<<dp[n];
    return 0;
}
