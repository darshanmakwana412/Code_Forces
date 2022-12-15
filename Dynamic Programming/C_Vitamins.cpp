#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long int

int solve() {

    int N,cost;
    string S;
    cin>>N;
    vector<vector<int>> dp(N+1, vector<int> (8, 1e9));
    dp[0][0] = 0;

    for(int i=1;i<=N;i++) {
        cin>>cost>>S;
        int hash = 0;
        for(char ch: S) {
            hash += (1<<(int(ch)-65));
        }
        for(int j=0;j<8;j++) {
            dp[i][j] = min(dp[i][j], dp[i-1][j]);
            dp[i][j|hash] = min(dp[i][j|hash], dp[i-1][j] + cost);
        }
    }

    int ans = dp[N][7];
    if(ans>=1e9) ans = -1;
    cout<<ans<<endl;
    
    return 0;
}

int main() {
    
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    #ifndef ONLINE_JUDGE
        auto start_time = chrono::high_resolution_clock::now();
        freopen("../input.txt", "r", stdin);
        freopen("../output.txt", "w", stdout);
    #endif
	
    solve();

    #ifndef ONLINE_JUDGE
        auto finish_time = chrono::high_resolution_clock::now();
        auto duration = chrono::duration_cast<chrono::microseconds>(finish_time - start_time);
        cout<<endl<<"Runtime : "<<duration.count()/1000.0<<" milliseconds"<<endl;
    #endif

	return 0;

}