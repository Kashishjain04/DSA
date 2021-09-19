//  https://www.codechef.com/START11B/problems/BIGARRAY
//  obtain_the_sum.cpp

#include <bits/stdc++.h>
using namespace std;
#define ll                long long
#define mod               1'000'000'007
#define pinf              LLONG_MAX
#define ninf              LLONG_MIN

void solve() {
    int t;
    cin >> t;
    while(t--){
        ll n,s;
        cin >> n >> s;
        ll ans = (n*(n+1))/2 - s;
        if(ans <= n && ans >= 1) cout << ans << endl;
        else cout << -1 << endl;
    }
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}

