//  https://www.codechef.com/START12C/problems/MAKEDIV3
//  make_it_divisible.cpp

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
        int n;
        cin >> n;
        string s = "3";
        for(int i=0; i<n-1; i++){
            s += '9';
        }
        cout << s << endl;
    }
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}

