vector<int> rotateArray(vector<int>arr, int k) {
    
    int n = arr.size();
    
    while(k--){
        int el = arr[0];

        for(int i=1; i<n; i++){
            arr[i-1] = arr[i];
        }

        arr[n-1] = el;
    }

    return arr;
}
