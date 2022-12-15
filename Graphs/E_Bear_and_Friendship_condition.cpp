#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long int

int solve() {

    int N,M,M1,M2;
    cin>>N>>M;
    vector<vector<int>> member(N+1);
    vector<bool> visited(N+1, false);

    for(int i=1;i<=M;i++) {
        cin>>M1>>M2;
        member[M1].push_back(M2);
        member[M2].push_back(M1);
    }

    for(int i=1;i<=N;i++) {
        if(!visited[i]) {
            for(auto mem: member[i]) {
                
            }
        }
    }
    
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