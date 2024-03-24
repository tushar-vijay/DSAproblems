#include <bits/stdc++.h> 
vector<int> rotateArray(vector<int>& arr, int n) {
    int el = arr[0];

    for(int i=1; i<n; i++){
        arr[i-1] = arr[i];
    }

    arr[n-1] = el;

    return arr;
}
