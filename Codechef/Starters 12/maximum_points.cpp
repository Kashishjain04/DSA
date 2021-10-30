//  https://www.codechef.com/START12C/problems/MAXPOINT
//  maximum_points.cpp

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
        vector<pair<ll, ll>> v(3);
        for(auto i=0; i<3; i++) cin >> v[i].first;
        for(auto i=0; i<3; i++) cin >> v[i].second;

        vector<vector<ll>> dp(241, vector<ll>(4, 0));

        for(auto i=1; i<241; i++) {
                dp[i] = dp[i-1];
            for(auto j=0; j<3; j++) {
                    if (i >= v[j].first and dp[i-v[j].first][j+1] < 20)
                        if (dp[i][0] < dp[i-v[j].first][0] + v[j].second) {
                            dp[i] = dp[i-v[j].first];
                            dp[i][0] += v[j].second;
                            dp[i][j+1]++;
                        }
                }
            }
            cout << dp[240][0] << endl;
    }
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}

