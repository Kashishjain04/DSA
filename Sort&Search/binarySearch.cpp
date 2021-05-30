//
//  binarySearch.cpp
//  Sorting
//
//  Created by Kashish Jain on 02/03/21.
//

#include <iostream>
#include <vector>

using namespace std;

template <typename T>
int binarySearch(vector<T> &arr, T num, int l, int r){
    if(l <= r){
        int m = (l+r)/2;
        if(arr[m] == num)
            return m;
        if(arr[m] > num)
            return binarySearch(arr, num, l, m-1);
        else
            return binarySearch(arr, num, m+1, r);
    }
    return -1;
}

int main(){
    vector<int> arr;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);
    arr.push_back(50);
    int size = (int)arr.size();
    int found = binarySearch(arr, 60, 0, size - 1);
    cout << found << "  ";
    cout << endl;
}
