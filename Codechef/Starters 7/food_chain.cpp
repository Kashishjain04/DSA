//  food_chain.cpp
//  https://www.codechef.com/START7B/problems/FODCHAIN

#include <bits/stdc++.h>
using namespace std;
int main(){
    // faster I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int e,k;
        cin >> e >> k;
        int ans = 1, t = e/k;
        while(t >= 1){
            ans++;
            t /= k;
        }
        cout << ans << endl;
    }
    return 0;
}
