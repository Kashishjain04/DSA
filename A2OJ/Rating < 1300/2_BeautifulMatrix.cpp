#include <bits/stdc++.h>
using namespace std;
 
#define int         long long int
#define mod         1000000007ll
#define pinf        LLONG_MAX
#define ninf        LLONG_MIN
#define v(type)     vector<type>
 
#define w(t)        int t;  cin >> t;   while (t--)
 
#define FastIO      ios_base::sync_with_stdio(false);   cin.tie(NULL);  cout.tie(NULL);
 
void solve() {
    for (int i=1; i<=5; i++) {
        for (int j=1; j<=5; j++) {
            int t;
            cin >> t;
            if(t == 1){
                cout << abs(i-3) + abs(j-3) << endl;
                return;
            }
        }
    }
}
 
int32_t main () {
    FastIO;
    solve();
    return 0;
}