//  https://www.codechef.com/SEPT21B/problems/TRAVELPS
//  travel_pass.cpp

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
        int n,a,b,ctr=0;
        string s;
        cin >>n>>a>>b;
        cin >> s;
        for(auto c:s){
            (c == '0') ? ctr += a : ctr += b;
        }
        cout << ctr << endl;
    }
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}

