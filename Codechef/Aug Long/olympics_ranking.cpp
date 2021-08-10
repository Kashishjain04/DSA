//  olympics_ranking.cpp
//  https://www.codechef.com/AUG21B/problems/OLYRANK

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
        int g1,s1,b1,g2,s2,b2;
        cin >>g1>>s1>>b1>>g2>>s2>>b2;
        (g1+s1+b1 > g2+s2+b2) ? cout << 1 : cout << 2;
        cout << endl;
    }
    return 0;
}
