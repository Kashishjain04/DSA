//  maximum_array_xor.cpp
//  https://www.codechef.com/START7B/problems/MAXARXOR

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
        int n, k;
        cin >> n >> k;
        int j = 1;
        for(int i=0; i < n; i++) j <<= 1ll;
        j -= 1;
        int x = min(k, (j + 1) / 2);
        cout << j * x * 2 << endl;
//        int n,k;
//        cin >> n >> k;
//        cout << (long long)((pow(2, n) - 1) * min(k,(int)pow(2,n-1)) * 2) << endl;
    }
    return 0;
}
