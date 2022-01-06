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
    string s,a;
    cin >> s;
    for(int i=0; i<s.length(); i++){
        if(s[i] == '.'){
            a.push_back('0');
        }else if(s[i] == '-'){
            if(s[i+1] == '.') a.push_back('1');
            else a.push_back('2');
            i++;
        }
    }
    cout << a << endl;
}
 
int32_t main () {
    FastIO;
    solve();
    return 0;
}