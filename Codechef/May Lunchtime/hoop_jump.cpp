// https://www.codechef.com/LTIME96C/problems/HOOPS

#include <bits/stdc++.h>
using namespace std;

int T;

int main() {
  //faster I/O
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
    cin >> T;
    while(T--){
      int n;
      cin >> n;
      cout << n/2+1 << endl;
    }
    return 0;
}
