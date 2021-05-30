//
//  noOf1s.cpp
//  Bitwise
//
//  Created by Kashish Jain on 06/05/21.
//

#include <bits/stdc++.h>
using namespace std;

int noOf1(int n){
    int count = 0;
    while(n){
        count++;
        n = n & n-1;
    }
    return count;
}

int main() {
    cout << noOf1(65) << endl;
    return 0;
}

