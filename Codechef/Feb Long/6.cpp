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

int countDigits(int n){
    int d=0;
    while(n){
        d++;
        n/=10;
    }
    return d;
}

void solve() {
    int n, k, m;
    cin>>n>>k>>m;
    string s;
    cin>>s;
    while(m--) {
        string st = "";
        for (int i = 0; i < s.size(); i++) {
            int temp = ((int)s[i] - 48) * k;
            st += to_string(temp); 
        }
        s = st;
    }
    cout<<s.size() % mod<<endl;
}

int32_t main() {
    clock_t start = clock();
    FastIO;
    file_i_o();
    w(t)
    solve();

    #ifndef ONLINE_JUDGE
        clock_t end = clock();
        cout << endl << endl << "Executed in: " << (double)(end - start) / double(CLOCKS_PER_SEC) << " sec";
    #endif
    return 0;
}