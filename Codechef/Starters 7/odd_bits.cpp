//
//  odd_bits.cpp
//  DSA
//
//  Created by Kashish Jain on 25/07/21.
//

#include <bits/stdc++.h>
using namespace std;
int countones(int n){
//    switch (n) {
//        case 357913941:
//            return 15;
//        case 89478485:
//            return 14;
//        case 22369621:
//            return 13;
//        case 5592405:
//            return 12;
//        case 1398101:
//            return 11;
//        case 349525:
//            return 10;
//        case 87381:
//            return 9;
//        case 21845:
//            return 8;
//        case 5461:
//            return 7;
//        case 1365:
//            return 6;
//        case 341:
//            return 5;
//        case 85:
//            return 4;
//        case 21:
//            return 3;
//        case 5:
//            return 2;
//        case 1:
//            return 1;
//        default:
//            return 0;
//    }
    int i=1, j = 1, ctr=0;
    while (i<31) {
      if (n&j) ctr++;
      j <<= 1ll;
        i++;
    }
    return ctr;
}
int main(){
    // faster I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //357913941
    int n,ans=0,k=1;
    cin >> n;
    while(ans<n){
        ans += countones(k & 357913941);
        k++;
    }
    cout << k-1 << endl;
    return 0;
}
