//  https://www.codechef.com/START11B/problems/COUNTA
//  counting_problem.cpp

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
        ll n, m=0;
        cin >> n;
        n--;
        while(n--){
            ll t;
            cin >> t;
            m = max(m, t);
        }
        cout << ((ll)pow(10, 5) - m + 1)*(ll)2 % mod - 1 << endl;
    }
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
//    solve();
    cout << ((ll)1e5 - (ll)6)*2 % mod << endl;
    return 0;
}

