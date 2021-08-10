//  chef_and_bulb_invention.cpp
//  https://www.codechef.com/AUG21B/problems/CHFINVNT

#include <bits/stdc++.h>
using namespace std;
int main(){
    // faster I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        long n,p,k,ans;
        cin >> n >> p >> k;
        n--;
        long i=n%k, j=p%k;
        if(i>=j){
            ans = j*(n/(int)k+1)+(p/(int)k+1);
        }else{
            ans = (i+1)*(n/k+1);
            n = max((int)(n-i-1),0);
            ans += (j-i-1)*(n/(int)k+1)+(p/(int)k+1);
        }
        cout << ans << endl;
    }
    return 0;
}
