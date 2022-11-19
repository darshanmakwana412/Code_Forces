// One Template to code them all
// One Template to solve them all
//                         ~ Darshan Makwana

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long int

int solve() {

    int N;
    cin>>N;
    for(int i=0;i<N;i++) {
        if((i/2)%2==1) cout<<"b";
        else cout<<"a";
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