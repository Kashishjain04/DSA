//  https://www.codechef.com/CHAPTZ01/problems/CHEFMRK
//  chef_marks.cpp

#include <bits/stdc++.h>
using namespace std;

int main() {
  //faster I/O
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
    long long x,y,z;
    cin >> x >> y >> z;
    cout << x+y+z-max(x,max(y,z))-min(x,min(y,z)) << endl;
    return 0;
}
