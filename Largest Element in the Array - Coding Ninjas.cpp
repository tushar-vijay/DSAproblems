#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    int ans = -1;

    for(int i=0; i<n; i++){
        if(arr[i] > ans)
            ans = arr[i];
    }

    return ans;
}
