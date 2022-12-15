#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long int

vector<vector<int>> villager(1e5 + 1);
vector<bool> visited(1e5 + 1, false);
vector<int> cost(1e5 + 1);

int min_cost(int i) {

    visited[i] = true;
    for(auto conn: villager[i]) {
        if(!visited[conn]) {
            cost[i] = min(cost[i], min_cost(conn));
        }
    }

    return cost[i];

}

int solve() {

    int N,M,rumor_cost=0;
    cin>>N>>M;

    for(int i=1;i<=N;i++) cin>>cost[i];
    for(int i=1;i<=M;i++) {
        int V1,V2;
        cin>>V1>>V2;
        villager[V1].push_back(V2);
        villager[V2].push_back(V1);
    }

    for(int i=1;i<=N;i++) {
        if(!visited[i]) {
            rumor_cost += min_cost(i);
        }
    }

    cout<<rumor_cost<<endl;
    
    return 0;
}

int main() {
    
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    #ifndef ONLINE_JUDGE
        auto start_time = chrono::high_resolution_clock::now();
        freopen("../input.txt", "r", stdin);
        freopen("../output.txt", "w", stdout);
    #endif
	
    int T=1;
    while(T--) {
        solve();
    }

    #ifndef ONLINE_JUDGE
        auto finish_time = chrono::high_resolution_clock::now();
        auto duration = chrono::duration_cast<chrono::microseconds>(finish_time - start_time);
        cout<<endl<<"Runtime : "<<duration.count()/1000.0<<" milliseconds"<<endl;
    #endif

	return 0;

}