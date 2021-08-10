//  problem_difficulties.cpp
//  https://www.codechef.com/AUG21B/problems/PROBDIFF

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
        int a,b,c,d,res;
        cin>>a>>b>>c>>d;
        if(a==b && a==c && a==d) res=0;
        else if((a==b && a==c && a!=d)|| (a==b && a==d && a!=c) || (a==c && a==d && a!=b) || (b==c && b==d && b!=a)) res = 1;
        else res = 2;
        cout << res << endl;
    }
    return 0;
}
