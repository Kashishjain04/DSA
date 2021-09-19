//  https://www.codechef.com/START11B/problems/FILLGRID
//  grid_fill.cpp

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
        if(n%2 == 0){
            for(int i=0; i<n; i++){
                for(int j=0; j<n; j++){
                    cout << -1 << " ";
                } cout << endl;
            }
        }else{
            for(int i=0; i<n; i++){
                for(int j=0; j<n; j++){
                    j == i ? cout << 1 : cout << -1;
                    cout << " ";
                }cout << endl;
            }
        }
    }
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}

