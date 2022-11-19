// One Template to code them all
// One Template to solve them all
//                         ~ Darshan Makwana

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long int

int solve() {

    string answer;
    cin>>answer;
    if(answer.size()==1) {
        char ch = answer[0];
        if(ch=='Y'|ch=='e'|ch=='s') {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
        return 0;
    }
    for(int i=0;i<answer.size()-1;i++) {
        char ch = answer[i];
        if(ch=='Y') {
            if(answer[i+1]!='e') {
                cout<<"NO"<<endl;
                return 0;
            }
        } else if(ch=='e') {
            if(answer[i+1]!='s') {
                cout<<"NO"<<endl;
                return 0;
            }
        } else if(ch=='s') {
            if(answer[i+1]!='Y') {
                cout<<"NO"<<endl;
                return 0;
            }
        } else {
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