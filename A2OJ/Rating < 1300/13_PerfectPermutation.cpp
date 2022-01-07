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
    int n;
    cin >> n;
    if(n%2){
        cout << "-1" << endl;
    }else{
        for(int i=1; i<=n; i+=2){
            cout << i+1 << " " << i << " ";
        }
        cout << endl;
    }
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