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
        freopen("/Users/kashish/Documents/C++/DSA/input.txt", "r", stdin);
        freopen("/Users/kashish/Documents/C++/DSA/output.txt", "w", stdout);
    #endif
}

void solve() {
    int n,k;
    cin >> n >> k;
    if(k<=(n+1)/2){
        cout << 2*k - 1 << endl;
    }
    else{
        cout << 2*(k-((n+1)/2)) << endl;
    }
}

int32_t main() {
    clock_t start = clock();
    FastIO;
    file_i_o();

    solve();

    #ifndef ONLINE_JUDGE
        clock_t end = clock();
        cout << endl << endl << "Executed in: " << (double)(end - start) / double(CLOCKS_PER_SEC) << " sec";
    #endif
    return 0;
}