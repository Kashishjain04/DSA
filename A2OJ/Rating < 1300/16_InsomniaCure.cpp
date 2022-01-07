#include <bits/stdc++.h>
using namespace std;

#define int         long long int
#define mod         1000000007ll
#define pinf        LLONG_MAX
#define ninf        LLONG_MIN
#define v(type)     vector<type>
#define w(t)        int t;  cin >> t;   while (t--)
#define f(type,i,x,y)    for (type i=x; i<y; i++)
#define FastIO      ios_base::sync_with_stdio(false);   cin.tie(NULL);  cout.tie(NULL);

void file_i_o() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}

void solve() {
    set<int> s;
    int k,l,m,n,d;
    cin >> k >> l >> m >> n >> d;
    for(int i=k; i<=d; i+=k) s.insert(i);
    for(int i=l; i<=d; i+=l) s.insert(i);
    for(int i=m; i<=d; i+=m) s.insert(i);
    for(int i=n; i<=d; i+=n) s.insert(i);
    cout << s.size() << endl;
}

int32_t main() {
    clock_t start = clock();
    FastIO;
    file_i_o();
    // w(t)
        solve();
#ifndef ONLINE_JUDGE
    clock_t end = clock();
    cout << endl << endl << "Executed in: " << (double)(end - start) / double(CLOCKS_PER_SEC) << " sec";
#endif
    return 0;
}