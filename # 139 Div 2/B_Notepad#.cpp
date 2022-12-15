// One Template to code them all
// One Template to solve them all
//                         ~ Darshan Makwana

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long int

int solve() {

    int N, operations=0;
    string S;
    cin>>N>>S;

    for(int i=0;i<N;i++) {
        int max_step=0;
        for(int j=0;j<i;j++) {
            int step=0;
            for(int k=j;k<i;k++) {
                if(S[i]!=S[j]) break;
                step++;
            }
            max_step = max(max_step, step);
        }
        if(max_step>1) i += max_step-1;
        operations++;
        
    }

    if(operations<N) cout<<"YES\n";
    else cout<<"NO\n";
    
    return 0;
}

int main() {
    
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    #ifndef ONLINE_JUDGE
        auto start_time = chrono::high_resolution_clock::now();
        freopen("../input.txt", "r", stdin);
        freopen("../output.txt", "w", stdout);
    #endif
	
    int T;
    cin>>T;
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