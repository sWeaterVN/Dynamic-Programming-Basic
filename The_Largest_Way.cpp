#include <bits/stdc++.h>
int m, n;
int dp[1001][1001];
int mt[1001][1001];
using namespace std;
int xl()
{
    for(int i=0; i<m; i++){
        dp[i][0]=mt[i][0];
    }
    for(int j=1; j<n; j++){
        for (int i=0; i<m; i++){
            int maxx=dp[i][j-1];
            if(i>0) maxx=max(maxx, dp[i-1][j-1]);
            if(i<m-1) maxx=max(maxx, dp[i+1][j-1]);
            dp[i][j]=mt[i][j]+maxx;
            cout<<dp[i][j]<<" ";
        }
        cout<<'\n';
    }
    int result=dp[0][n-1];
    for(int i=1; i<m; i++){
        result=max(result, dp[i][n-1]);
    }
    return result;
}

int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin>>m>>n;
    for(int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            cin>>mt[i][j];
        }
    }
    cout<<xl();
    return 0;
}
