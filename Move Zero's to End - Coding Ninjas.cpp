vector<int> moveZeros(int n, vector<int> a) {
    int count = 0;

    for(int i=0; i<n; i++){
        if(a[i] != 0){
            swap(a[i], a[count]);
            count++;
        }
    }

    return a;
}
