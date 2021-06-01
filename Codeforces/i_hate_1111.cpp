//
//  i_hate_1111.cpp
//  http://codeforces.com/problemset/problem/1526/B

#include <bits/stdc++.h>
using namespace std;

bool checkDiv(int n){
    if(n<11)return false;
    string str = to_string(n);
    int i = str.length(), num=0;
    while(i--){
        num += pow(10,i);
    }
    if(n%num == 0)return true;
    return checkDiv(n%num);
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        checkDiv(n) ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}

