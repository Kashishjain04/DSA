//
//  main.cpp
//  Bitwise
//
//  Created by Kashish Jain on 06/05/21.
//

#include <bits/stdc++.h>
using namespace std;

int getBit(int n, int pos){
    return (n & (1<<pos)) != 0;
}
int setBit(int n, int pos){
    return n | (1<<pos);
}
int clearBit(int n, int pos){
    return n & ~(1<<pos);
}
int updateBit(int n, int pos, int bit){
    n = clearBit(n, pos);
    return n | (bit<<pos);
}

int main() {
//    cout << getBit(6, 0) << endl;
//    cout << setBit(6, 0) << endl;
//    cout << clearBit(6, 1) << endl;
    cout << updateBit(6, 1, 0) << endl;
}
