//  https://www.codechef.com/START12C/problems/GOODWEAT
//  good_weather.cpp

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
        int a=0;
        for (int i=0; i<7; i++) {
            int t;
            cin >> t;
            a += t;
        }
        a >= 4 ? cout << "YES\n" : cout << "NO\n";
    }
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}

