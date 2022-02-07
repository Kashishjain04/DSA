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
    int n; cin>>n;
    int op=-1;
    v(int) a(n+1);
    f(i,1,n+1) {
        cin>>a[i];
        if((a[i]%2) && op==-1) op=i;
    }
    if(op == -1){
        cout << -1 << endl;
        return;
    }
    vector<pair<int,int>> a1,a2;
    if(!(a[2]%2)) a1.push_back({2,op});
    f(i,1,n+1){
        if(i==2) continue;
        if(i%2 && a[i]%2)
            a1.push_back({i,2});
        if(!(i%2) && !(a[i]%2))
            a1.push_back({i,2});
    }
    
    if(!(a[1]%2)) a2.push_back({1,op});
    f(i,2,n+1){
        if(i%2 && !(a[i]%2))
            a2.push_back({i,1});
        if(!(i%2) && a[i]%2)
            a2.push_back({i,1});
    }

    cout << min(a1.size(),a2.size()) << endl;
    for(auto i: a1.size()<a2.size()?a1:a2){
        cout << i.first << " " << i.second << endl;
    }
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