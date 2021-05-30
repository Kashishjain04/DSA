//
//  revString.cpp
//  Recursion
//
//  Created by Kashish Jain on 06/05/21.
//

#include <bits/stdc++.h>
using namespace std;

string rev(string str){
    if(str.length() == 0) return "";
    return rev(str.substr(1)) + str[0];
}

int main() {
    string str;
    cin >> str;
    cout << rev(str) << endl;
    return 0;
}

