//  chef_vs_bharat.cpp
//  https://www.codechef.com/JULY21C/problems/CHEFORA

#include <bits/stdc++.h>
using namespace std;
int main(){
    // faster I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int q, l, r;
    cin >> q;
    while(q--){
        cin >> l >> r;
        long long t = 1;
        for(int i=l+1; i<=r; i++){
            int k = arr[i];
            while(k>0){
                t *=
            }
            t *= (long long)pow(arr[l-1], arr[i-1]);
        }
        cout << t%(1000000007) << endl;
    }
    return 0;
}
