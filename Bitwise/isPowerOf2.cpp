//
//  isPowerOf2.cpp
//  Bitwise
//
//  Created by Kashish Jain on 06/05/21.
//

#include <bits/stdc++.h>
using namespace std;

bool isPowerOf2(int n){
    return n && !(n & n-1);
}

int main(){
    cout << isPowerOf2(5) << endl;
}
