//
//  printSubsets.cpp
//  Bitwise
//
//  Created by Kashish Jain on 06/05/21.
//

#include <bits/stdc++.h>
using namespace std;

void printSubsets(int arr[], int n){
    for(int i=0; i<(1<<n); i++){
        cout << "{ ";
        for(int j=0; j<n; j++){
            if(i&(1<<j)) cout << arr[j] << " ";
        } cout << "}\n";
    }
}

int main() {
    int arr[3] = {1,2,3};
    printSubsets(arr, 3);
}
