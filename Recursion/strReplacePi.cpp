//
//  strReplacePi.cpp
//  Recursion
//
//  Created by Kashish Jain on 06/05/21.
//

#include <bits/stdc++.h>
using namespace std;

void repPi(string str){
    if(str.length() == 0) {
        cout << endl;
        return;
    }
    if(str[0] == 'p' && str[1] == 'i') {
        cout << "3.14";
        repPi(str.substr(2));
    }else{
        cout << str[0];
        repPi(str.substr(1));
    }
}

int main() {
    repPi("pippxxppixipi");
    return 0;
}

