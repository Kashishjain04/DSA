//  https://www.codechef.com/START16B/problems/DIRECTN
//  professor_directions.cpp

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
    int n, flag=0;
    cin >> n;
    string s;
    cin >> s;
    for(int i=0; i<n-1; i++){
        if(s[i] == s[i+1]){
            flag=1;
            cout << "YES\n";
            break;
        }
    }
    if(!flag) cout << "NO\n";
}

int32_t main () {
    FastIO;
    w(t) solve();
    return 0;
}

