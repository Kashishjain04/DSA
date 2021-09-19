//  https://www.codechef.com/SEPT21B/problems/SHUFFLIN
//  shuffling_parities.cpp

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
        int n,even=0,odd=0;
        cin >> n;
        for(int i=0; i<n; i++){
            int t;
            cin >> t;
            t % 2 == 0 ? even++ : odd++;
        }
        cout << min(even,(n+1)/2) + min(odd, n/2) << endl;
    }
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}
