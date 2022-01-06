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

void solve() {
    int x=0,y=0,z=0,n;
    cin >> n;
    while(n--){
        int a,b,c;
        cin >> a >> b >> c;
        x += a;
        y += b;
        z += c;
    }
    if(x==0&&y==0&&z==0) cout << "YES\n";
    else cout << "NO\n";
}

int32_t main() {
    FastIO;
    file_i_o();
    // w(t)
        solve();
    return 0;
}