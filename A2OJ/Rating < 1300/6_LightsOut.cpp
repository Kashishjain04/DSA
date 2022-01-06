#include <bits/stdc++.h>
using namespace std;

// #define int         long long int
#define mod         1000000007ll
#define pinf        LLONG_MAX
#define ninf        LLONG_MIN
#define v(type)     vector<type>
#define w(t)        int t;  cin >> t;   while (t--)
#define f(type, i,x,y)    for (type i=x; i<y; i++)
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
    int arr[3][3], res[3][3];
    f(int, i,0,3) f(int, j,0,3) cin >> arr[i][j];
    f(int, i,0,3) f(int, j,0,3) res[i][j] = 1;
    f(int, i,0,3) f(int, j,0,3){
        if(arr[i][j] % 2) {
            res[i][j] = (res[i][j] + 1)%2;
            res[max(i-1, 0)][j] = (res[max(i-1, 0)][j] + 1)%2;
            res[i][max(j-1, 0)] = (res[i][max(j-1, 0)] + 1)%2;
            res[min(i+1, 2)][j] = (res[min(i+1, 2)][j] + 1)%2;
            res[i][min(j+1, 2)] = (res[i][min(j+1, 2)] + 1)%2;
        }
    }
    f(int, i,0,3) {
        f(int, j,0,3) cout << res[i][j] << " ";
        cout << endl;
    }
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