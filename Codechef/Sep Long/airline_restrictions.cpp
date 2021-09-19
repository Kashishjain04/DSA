//  https://www.codechef.com/SEPT21B/problems/AIRLINE
//  airline_restrictions.cpp


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
        int a,b,c,d,e;
        cin >>a>>b>>c>>d>>e;
        int low = min(min(a, b), c), up = max(max(a, b), c);
        int mid = a+b+c-low-up;
        if(up <= e){
            (low + mid  <= d) ? cout << "YES\n" : cout << "NO\n";
        }else if(mid <= e){
            (low + up  <= d) ? cout << "YES\n" : cout << "NO\n";
        }else if(low <= e){
            (mid + up  <= d) ? cout << "YES\n" : cout << "NO\n";
        }else{
            cout << "NO\n";
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

