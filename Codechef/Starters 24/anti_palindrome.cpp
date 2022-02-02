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

bool comp(pair<char, int>&a, pair<char, int>&b) {
    return a.second < b.second;
}

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    if(n%2){
        cout << "NO" << endl;
        return;
    }
    map<char, int> m;
    for(auto c:s){
        m[c]++;
        if(m[c] > n/2){
            cout << "NO" << endl;
            return;
        }
    }
    vector<pair<char, int>>v;
    for(auto c:m){
        v.push_back(make_pair(c.first, c.second));
    }
    sort(v.begin(), v.end(), comp);    
    cout << "YES" << endl;
    string ans;
    for(auto i:v){
        ans += string(i.second,i.first);
    }
    f(i,0,n/2){
        cout << ans[i];
    }
    for(int i=n-1; i>=n/2; i--){
        cout << ans[i];
    }
    cout << endl;
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