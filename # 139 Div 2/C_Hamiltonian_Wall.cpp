// One Template to code them all
// One Template to solve them all
//                         ~ Darshan Makwana

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long int

int solve() {

    int M;
    string R1,R2;
    cin>>M>>R1>>R2;

    if((R1[0]=='W')&&(R2[0]=='W')) {
        cout<<"NO\n";
        return 0;
    }

    for(int i=1;i<M;i++) {
        if((R1[i]=='W')&&(R2[i]=='W')) {
            cout<<"NO\n";
            return 0;
        } else {
            if((R1[i]!=R1[i-1])&&(R2[i]!=R2[i-1])) {
                cout<<"NO\n";
                return 0;
            } 
        }
    }

    cout<<"YES\n";
    
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