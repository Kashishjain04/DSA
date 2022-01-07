#include <bits/stdc++.h>
using namespace std;

#define int         long long int
#define mod         1000000007ll
#define pinf        LLONG_MAX
#define ninf        LLONG_MIN
#define v(type)     vector<type>
#define w(t)        int t;  cin >> t;   while (t--)
#define f(i,x,y)    for (auto i=x; i<y; i++)
#define FastIO      ios_base::sync_with_stdio(false);   cin.tie(NULL);  cout.tie(NULL);

void file_i_o() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}

bool checkLucky(int n){
    if(n == 0) return false;    
    while(n){
        int t = n%10;
        if(t != 4 && t != 7) return false;
        n /= 10;
    }
    return true;
}

void solve() {
    int n, c=0;
    cin >> n;
    while(n){
        int t = n%10;
        if(t == 4 || t == 7) c++;
        n /= 10;
    }
    cout << (checkLucky(c) ? "YES" : "NO") << endl;
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