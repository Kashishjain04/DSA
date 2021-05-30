//
//  quickSort.cpp
//  Sorting
//
//  Created by Kashish Jain on 01/03/21.
//

#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

template <typename T>
void swap(T *x, T *y) {
    T temp = *x;
    *x = *y;
    *y = temp;
}

template <typename T>
void quickSort(vector<T>&arr, int l, int r) {
    if(l < r){
    int j, p = r;
    for(int i=l; i<r; i++){
        if(arr[i] > arr[p]){
            for(j=i+1; j<r; j++){
                if(arr[j] <= arr[p]){
                    swap(&arr[i], &arr[j]);
                    break;
                }
                
            }
            if(j == r){
                swap(&arr[i], &arr[p]);
                p = i;
                break;
            }
        }
    }
        if(p != r){
            quickSort(arr, l, p);
            quickSort(arr, p+1, r);
        }
    }
}

int main(){
    vector<int> arr;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(15);
    arr.push_back(30);
    arr.push_back(5);
    int size = (int)arr.size();
    auto start = high_resolution_clock::now();
    quickSort(arr, 0, size-1);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(stop - start);
    cout << "Time taken by function: "
             << duration.count() << " nanoseconds" << endl;
    for(auto x:arr){
        cout << x << "  ";
    }
    cout << endl;
}
