//
//  moveXEndStr.cpp
//  Recursion
//
//  Created by Kashish Jain on 07/05/21.
//

#include <bits/stdc++.h>
using namespace std;

string moveX(string str){
    if(str.length() == 0) return"";
    if(str[0] == 'x') return moveX(str.substr(1)) + str[0];
    return str[0] + moveX(str.substr(1));
}

int main() {
    string str = "abcxxfawqxfaxx";
    cout << moveX(str) << endl;
    return 0;
}

