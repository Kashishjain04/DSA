//
//  selectionSort.cpp
//  Sorting
//
//  Created by Kashish Jain on 28/02/21.
//

#include <bits/stdc++.h>

using namespace std;

void swap(int *x, int *y){
    int t = *x;
    *x = *y;
    *y = t;
}

void selectionSort(vector<int>&arr){
    int size = (int)arr.size(), min;
    for(int i=0; i<size-1; i++){
        min = i;
        for (int j=i+1; j<size; j++) {
            if(arr[j] < arr[min])
                min = j;
        }
        if(min != i)
            swap(&arr[i], &arr[min]);
    }
}

int main(){
    vector<int> arr;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(15);
    arr.push_back(30);
    arr.push_back(5);
    selectionSort(arr);
    for(auto x:arr){
        cout << x << "  ";
    }
    cout << endl;
}
