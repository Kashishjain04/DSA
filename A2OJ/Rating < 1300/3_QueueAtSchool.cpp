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
    int n,t;
    cin >> n >> t;
    string q;
    cin >> q;    
    while(t--){
        for (int i=0; i<n-1; i++) {
            if(q[i] == 'B' && q[i+1] == 'G'){
                q[i] = 'G';
                q[i+1] = 'B';
                i++;
            }
        }
    }
    cout << q << endl;
}
 
int32_t main () {
    FastIO;
    solve();
    return 0;
}