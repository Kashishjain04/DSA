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

bool isEq(vector<int>a){
    f(i,0,a.size()-1){
        if(a[i]!=a[i+1]) return false;
    }
    return true;
}

int getMax(vector<int>a){
    int max = a[0];
    f(i,1,a.size()){
        if(a[i]>max) max = a[i];
    }
    return max;
}

void solve() {
    int n; cin>>n;
    v(int) a(n);
    f(i,0,n) cin>>a[i];
    if(n==2)
    if(isEq(a)){
        cout << 0 << endl;
        return;
    }
    int ans=0, max=getMax(a);
    f(i,0,n-1){
        if(a[i]==max) continue;
        if(a[i]+a[i+1] == max){}
    }
}

int32_t main() {
    clock_t start = clock();
    FastIO;
    file_i_o();

    solve();

    #ifndef ONLINE_JUDGE
        clock_t end = clock();
        cout << endl << endl << "Executed in: " << (double)(end - start) / double(CLOCKS_PER_SEC) << " sec";
    #endif
    return 0;
}