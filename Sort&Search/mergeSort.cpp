//
//  mergeSort.cpp
//  Sorting
//
//  Created by Kashish Jain on 01/03/21.
//

#include <bits/stdc++.h>

using namespace std;

template <typename T>
void merge(vector<T>&arr, int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];
    for(int i=0; i<n1; i++)
        L[i] = arr[l+i];
    for(int i=0; i<n2; i++)
        R[i] = arr[m+i+1];
    
    int i = 0, j = 0, k = l;
    
    while(i<n1 && j<n2){
        if(L[i] <= R[j]){
            arr[k] = L[i];
            i++;
        } else{
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k] = L[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k] = R[j];
        j++;
        k++;
    }
        
}

template <typename T>
void mergeSort(vector<T>&arr, int l, int r) {
    if(l<r){
        int m = (l+r)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        
        merge(arr, l, m, r);
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
    mergeSort(arr, 0, size-1);
    for(auto x:arr){
        cout << x << "  ";
    }
    cout << endl;
}
