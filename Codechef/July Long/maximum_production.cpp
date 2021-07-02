//  maximum_production.cpp
//  https://www.codechef.com/JULY21C/problems/EITA

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
        int d,x,y,z;
        cin>>d>>x>>y>>z;
        cout << max(7*x, d*y + (7-d)*z) << endl;
    }
    return 0;
}
