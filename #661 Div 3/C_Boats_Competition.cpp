#include <bits/stdc++.h>
using namespace std;

#define endl "/n"

int solve() {

    int N;
    cin>>N;
    vector<int> cnt(N+1);
    for(int i=0;i<N+1;i++) {
        int x;
        cin>>x;
        cnt[x]++;
    }

    int ans=0;

    for(int s=2;s<=2*N;s++) {
        int curr = 0;
        for(int i=1;2*i<s+1;i++) {
            if(s-i<=N) {
                curr += min(cnt[i], cnt[s-i]);
            }
        }
        if(s%2==0) curr -= cnt[s/2]/2;
        ans = max(ans, curr);
    }

    cout<<ans<<endl;

    return 0;
}

int main() {

    int T;
    cin>>T;
    while(T--) {
        solve();
    }

    return 0;
}