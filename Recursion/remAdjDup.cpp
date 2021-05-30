//
//  remAdjDup.cpp
//  Recursion
//
//  Created by Kashish Jain on 07/05/21.
//

#include <bits/stdc++.h>
using namespace std;

string remDup(string str){
    if(str.length() == 0) return "";
    string nextStr = remDup(str.substr(1));
    if(str[0] == nextStr[0]) return nextStr;
    return str[0]+nextStr;
}

int main() {
    string str = "aaabccddeeefghh";
    cout << remDup(str) << endl;
    return 0;
}

