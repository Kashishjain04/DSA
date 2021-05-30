//
//  countSort.cpp
//  Sorting
//
//  Created by Kashish Jain on 20/05/21.
//

#include <iostream>
using namespace std;

int* countSort(int *arr, int n){
    int maxEl = arr[0];
    for (int i=0; i<n; i++) {
        maxEl = max(maxEl, arr[i]);
    }
    // Initializing counts array
    int* countArr = new int[maxEl+1];
    for (int i=0; i<maxEl+1; i++) {
        countArr[i] = 0;
    }
    // Adding counts of elements in counts array
    for (int i=0; i<n; i++) {
        countArr[arr[i]]++;
    }
    // adjust counts array to get position of elements
    for (int i=1; i<maxEl+1; i++) {
        countArr[i] += countArr[i-1];
    }
    // creating sorted array
    int* finalArr = new int[n];
    for (int i=n-1; i>=0; i--) {
        finalArr[--countArr[arr[i]]] = arr[i];
    }
    return finalArr;
}

int main(){
    int n;
    cin >> n;
    int* arr = new int[n];
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int* finalArr = countSort(arr, n);
    for (int i=0; i<n; i++) {
        cout << finalArr[i] << " ";
    }
    cout << endl;
    return 0;
}

