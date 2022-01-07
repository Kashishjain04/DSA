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

map<int, int> initMap(){
    map<int, int>m;
    m[2] = 3;
    m[3] = 5;
    m[5] = 7;
    m[7] = 11;
    m[11] = 13;
    m[13] = 17;
    m[17] = 19;
    m[19] = 23;
    m[23] = 29;
    m[29] = 31;
    m[31] = 37;
    m[37] = 41;
    m[41] = 43;
    m[43] = 47;
    m[47] = 53;
    m[53] = 59;
    m[59] = 61;
    return m;
}

void solve() {
    map<int, int> map = initMap();
    int n,m;
    cin >> n >> m;
    cout << (map[n] == m ? "YES" : "NO") << endl;
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