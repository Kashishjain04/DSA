//  17:30
//  special_triplets.cpp
//  https://www.codechef.com/AUG21B/problems/SPCTRIPS

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
        int n,ans=0;
        cin>>n;
        if(n>1){
            for(int b=2; b<=n; b++){
                vector<int>div;
//                div.push_back(1);
                ans += (n-1)/b + 1;
                for(int i=2; i<=sqrt(b); i++){
                    if(b%i == 0){
                        if(b/i == i) {
//                            div.push_back(i);
                            ans += (n-i)/b + 1;
                        }
                        else{
//                            div.push_back(i);
//                            div.push_back(b/i);
                            ans += (n-i)/b + 1;
                            ans += (n-b/i)/b + 1;
                        }
                    }
                }
//                for(auto x:div){
//                    ans += (n-x)/b + 1;
//                }
            }
        }
        cout << ans << endl;
    }
}

int32_t main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}

