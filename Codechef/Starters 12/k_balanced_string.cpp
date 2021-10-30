//  https://www.codechef.com/START12C/problems/KBALANCE
//  k_balanced_string.cpp

#include <bits/stdc++.h>
using namespace std;
#define ll                long long
#define mod               1'000'000'007
#define pinf              LLONG_MAX
#define ninf              LLONG_MIN

void solve() {
    int t;
    cin >> t;
    while(t--){
        int n,k,a=0;
        cin >> n >> k;
        string s;
        cin >> s;
        for(int i=0; i<n; i++){
            if(s[i] == '1'){
                if(i>=k){
                    if(s[i-k] == '1') continue;
//                    else s[i-k] = '1';
                }
                if(i < n+k){
                    if(s[i+k] == '1') continue;
//                    else s[i+k] = '1';
                }
                s[i] = 0;
                a++;
            }
        }
        cout << a << endl;
    }
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}

