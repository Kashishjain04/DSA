//
//  genAllSubstr.cpp
//  Recursion
//
//  Created by Kashish Jain on 07/05/21.
//

#include <bits/stdc++.h>
using namespace std;

//Bitwise approach
void genSubstr(string str){
    for(int i=0; i<(1<<str.length()); i++){
        for(int j=0; j<str.length(); j++){
            if(1<<j & i) cout << str[j] << " ";
        } cout << endl;
    }
}

//Recursive approach
void genSubstrRec(string str){
    if(str.length() == 0) return;
    cout << str << endl;
    cout << str[0] << endl;
    genSubstr(str.substr(1));
}

int main() {
    string str = "ABC";
    genSubstr(str);
    genSubstrRec(str);
    return 0;
}

