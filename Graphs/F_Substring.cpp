// One Template to code them all
// One Template to solve them all
//                         ~ Darshan Makwana

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long int

int solve() {

    int N,M,v1,v2;
    cin>>N>>M;
    string S;
    cin>>S;

    vector<vector<int>> edges(3e5+1);
    vector<int> degree(3e5+1,0);
    vector<int> topsort;

    for(int i=1;i<=M;i++) {
        cin>>v1>>v2;
        edges[v1].push_back(v2);
        degree[v2]++;
    }

    queue<int> que;
    int count=0;
    for(int i=1;i<=N;i++) {
        if(degree[i]==0) {
            que.push(i);
        }
    }
    
    while(!que.empty()) {
        count++;
        int node = que.front();
        que.pop();
        topsort.push_back(node);

        for(int ver: edges[node]) {
            degree[ver]--;
            if(degree[ver]==0) {
                que.push(ver);
            }
        }
    }

    if(count<N) {
        cout<<-1<<endl;
        return 0;
    }

    int ans=0;

    // dp

    for(char ch='a';ch<='z';ch++) {
        vector<int> dp(3e5+1,0);
        for(int node: topsort) {
            if(S[node-1]==ch) dp[node]++;
            for(int ver: edges[node]) {
                dp[ver] = max(dp[ver], dp[node]);
            }
            ans = max(ans, dp[node]);
        }
    }

    cout<<ans;
    
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