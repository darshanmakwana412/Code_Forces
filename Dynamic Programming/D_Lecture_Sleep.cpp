#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long int

int solve() {

    int N,K, max_theorems = 0, theorems = 0;
    cin>>N>>K;
    vector<int> A(N+1,0), T(N+1,0), prefix_sum(N+1,0);

    for(int i=1;i<=N;i++) {
        cin>>A[i];
    }
    for(int i=1;i<=N;i++) {
        cin>>T[i];
    }
    for(int i=1;i<=N;i++) {
        if(!T[i]) {
            prefix_sum[i] = prefix_sum[i-1] + A[i];
        } else {
            theorems += A[i];
            prefix_sum[i] = prefix_sum[i-1];
        }
    }

    for(int i=1;i<=N-K+1;i++) {
        max_theorems = max(max_theorems, prefix_sum[i+K-1]-prefix_sum[i-1]);
    }

    cout<<max_theorems+theorems<<endl;
    
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