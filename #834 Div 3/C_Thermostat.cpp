// One Template to code them all
// One Template to solve them all
//                         ~ Darshan Makwana

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long int

int solve() {

    int L,R,X;
    cin>>L>>R>>X;
    int A,B;
    cin>>A>>B;
    if(2*X>R-A) {
        if((B<A+X)&&(B>R-X)) {
            cout<<"NO"<<endl;
            return 0;
        } 
    } else if(2*X>A-L) {
        if((B<L+X)&&(B>A-X)) {
            cout<<"NO"<<endl;
            return 0;
        }
    } 

    cout<<"YES"<<endl;
    
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