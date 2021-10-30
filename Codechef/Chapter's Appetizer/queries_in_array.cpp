//  https://www.codechef.com/CHAPTZ01/problems/ARRQUERY
//  queries_in_array.cpp

#include <bits/stdc++.h>
using namespace std;
#define ll                long long
#define mod               1'000'000'007
#define pinf              LLONG_MAX
#define ninf              LLONG_MIN

ll findx(vector<ll> v, ll x, ll l, ll r){
    if(l < r){
        ll m = (l+r)/2;
        if(v[m] == x)
            return m;
        if(v[m] > x)
            return findx(v, x, l, m-1);
        else
            return findx(v, x, m+1, r);
    }
    if(v[r] < x) return r+1;
    return l;
}

void solve() {
    ll n,q;
    cin >> n >> q;
    vector<ll> v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    while(q--){
        ll l,r,x;
        cin >> l >> r >> x;
        ll p = findx(v, x, l-1, r-1);
        (r-p > 0) ? cout << r-p << endl : cout << 0 << endl;
    }
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}
