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
    int n;
    cin >> n;
    n++;
    while(true){
        int x = (n/1000)%10, y = (n/100)%10, z = (n/10)%10, w = n%10;
        if(y==x){
            n += 100 - (n%100);
            continue;
        }
        if(z==y || z==x){
            n += 10 - (n%10);
            continue;
        }
        if(w==z || w==y || w==x){
            n ++;
            continue;
        }
        cout << n << endl;
        break;
    }
}
 
int32_t main () {
    FastIO;
    solve();
    return 0;
}