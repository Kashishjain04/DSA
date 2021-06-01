//
//  and_then_there_were_k.cpp
//  http://codeforces.com/problemset/problem/1527/A

#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--) {
        int n,i=0;
        cin>>n;
        while((1<<i) <= n) i++;
        i--;
        cout << (1<<i) -1 << endl;
    }
    return 0;
}

