//  relativity.cpp
//  https://www.codechef.com/JULY21C/problems/RELATIVE

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
        int g,c;
        cin>>g>>c;
        cout << (c*c)/(2*g) << endl;
    }
    return 0;
}
