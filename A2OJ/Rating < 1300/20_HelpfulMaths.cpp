#include <bits/stdc++.h>
using namespace std;

#define int         long long int
#define mod         1000000007ll
#define pinf        LLONG_MAX
#define ninf        LLONG_MIN
#define v(type)     vector<type>
#define w(t)        int t;  cin >> t;   while (t--)
#define f(type,i,x,y)    for (type i=x; i<y; i++)
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
    int arr[3] = {0,0,0};
    string s, ans;
    cin >> s;
    for(int i=0; i<s.size(); i+=2){
        if(s[i] == '1') arr[0]++;
        if(s[i] == '2') arr[1]++;
        if(s[i] == '3') arr[2]++;
    }
    f(int,i,0,arr[0]) ans.append("1+");
    f(int,i,0,arr[1]) ans.append("2+");
    f(int,i,0,arr[2]) ans.append("3+");
    ans.pop_back();
    cout << ans << endl;
}

int32_t main() {
    clock_t start = clock();
    FastIO;
    file_i_o();
    // w(t)
        solve();
#ifndef ONLINE_JUDGE
    clock_t end = clock();
    cout << endl << endl << "Executed in: " << (double)(end - start) / double(CLOCKS_PER_SEC) << " sec";
#endif
    return 0;
}