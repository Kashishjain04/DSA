//
//  findUnique.cpp
//  Bitwise
//
//  Created by Kashish Jain on 06/05/21.
//

#include <bits/stdc++.h>
using namespace std;

int unique(int arr[], int n){
    int xorsum = 0;
    for(int i=0; i<n; i++){
        xorsum = xorsum^arr[i];
    }
    return xorsum;
}

int main(){
    int arr[8] = {1,2,3,4,3,2,1,1};
    cout << unique(arr, 8) << endl;
}
