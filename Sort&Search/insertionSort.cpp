//
//  insertionSort.cpp
//  Sorting
//
//  Created by Kashish Jain on 01/03/21.
//

#include <bits/stdc++.h>

using namespace std;

template <typename T>
void swap(T *x, T *y){
    T temp = *x;
    *x = *y;
    *y = temp;
}

template <typename T>
void insertionSort(vector<T> &arr){
    int size = (int)arr.size();
    for(int i=0; i<size; i++){
        T check = i;
        for(int j = i-1; j>= 0; j--){
            if(arr[j] < arr[check])
                break;
            if(arr[j] > arr[check]){
                swap(&arr[check], &arr[j]);
                check = j;
            }
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
    insertionSort(arr);
    for(auto x:arr){
        cout << x << "  ";
    }
    cout << endl;
}
