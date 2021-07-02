// https://www.codechef.com/JUNE21C/problems/CHFHEIST

#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long D,d,p,q;
        cin>>D>>d>>p>>q;
        long ans = D*p;
        for(long i=1; i<D; i++){
            ans += q*(i/d);
        }
        cout << ans << endl;
    }
    return 0;
}


//// faster I/O
//ios_base::sync_with_stdio(false);
//cin.tie(NULL);
//cout.tie(NULL);
