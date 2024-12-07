#include<bits/stdc++.h>
using namespace std;
int n; 
int h[100001], dp[100001];
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	cin>>n;
	for(int i=1; i<=n; i++){
		cin>>h[i];
	}
	dp[1]=0;
	dp[2]=abs(h[1]-h[2]);
	for(int i=3; i<=n; i++){
		dp[i]=min(dp[i-1] + abs(h[i-1]-h[i]), dp[i-2] + abs(h[i-2]-h[i]));
	}
	cout<<dp[n];
	return 0;
}
