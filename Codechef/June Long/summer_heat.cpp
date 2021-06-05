// https://www.codechef.com/JUNE21C/problems/COCONUT

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
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        cout << d/b + c/a << endl;
    }
    return 0;
}
