//  ceiling_sum.cpp
//  https://www.codechef.com/START7B/problems/CEILSUM


#include <bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(){
    // faster I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        if(a==b) cout << 0 << endl;
        else cout << max(ceil((b-a)/2.0), ceil((b-a-1)/2.0) + 1) << endl;
    }
    return 0;
}
