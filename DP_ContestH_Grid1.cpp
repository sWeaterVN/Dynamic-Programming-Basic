#include<bits/stdc++.h>
using namespace std;
int h, w;
char a[1001][1001];
int dp[1001][1001];
const long long N=1e9+7;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin>>h>>w;
    for(int i=1; i<=h; i++){
        for(int j=1; j<=w; j++){
            cin>>a[i][j];
        }
    }
    dp[1][1]=1;
    for(int i=1; i<=h; i++){
        for(int j=1; j<=w; j++){
            if(i==1 && j==1) continue;
            if(a[i][j]=='.')
                dp[i][j]=(dp[i-1][j]+dp[i][j-1])%N;
            if(a[i][j]=='#')
                dp[i][j]=0;
        }
    }
    cout<<dp[h][w];
    return 0;
}
