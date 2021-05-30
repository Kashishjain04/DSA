//
//  BubbleSort.cpp
//  Sorting
//
//  Created by Kashish Jain on 28/02/21.
//

#include <bits/stdc++.h>

using namespace std;
using namespace std::chrono;

void swap(int *x, int *y){
    int t = *x;
    *x = *y;
    *y = t;
}

void bubbleSort(vector<int> &arr){
    bool swapped = false;
    int size = (int)arr.size();
    for(int i=0; i<size-1; i++){
        swapped = false;
        for (int j=0; j<size-i-1; j++) {
            if(arr[j] > arr[j+1]){
                swapped = true;
                swap(&arr[j], &arr[j+1]);
            }
        }
        if(!swapped)
            break;
    }
}

int main(){
    vector<int> arr;
    arr.push_back(5);
    arr.push_back(10);
    arr.push_back(15);
    arr.push_back(20);
    arr.push_back(30);
    auto start = high_resolution_clock::now();
    bubbleSort(arr);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(stop - start);
    cout << "Time taken by function: "
             << duration.count() << " nanoseconds" << endl;
    for(auto x:arr){
        cout << x << "  ";
    }
    cout << endl;
}
