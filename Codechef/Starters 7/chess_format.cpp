//  chess_format.cpp
//  https://www.codechef.com/START7B/problems/CHSFORMT

#include <bits/stdc++.h>
using namespace std;
int main(){
    // faster I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin >> T;
    while (T--) {
        int a,b;
        cin >> a >> b;
        if(a+b < 3) cout << 1 << endl;
        else if(a+b <= 10) cout << 2 << endl;
        else if(a+b <= 60) cout << 3 << endl;
        else cout << 4 << endl;
    }
    return 0;
}
