int binarySearch(vector<int> arr, int n, int s, int e, int k){
    int mid = s + (e-s)/2;
    int count = 0;
    
    while(s <= e){
    
        if(arr[mid] == k){
            return mid;
        }
        else if(arr[mid] > k)
            e = mid;
        else
            s = mid+1;
        
        mid = s + (e-s)/2;
        
        if(s == e) count++;
        if(count==2) break;
        
    }

    return -1;
}

int search(vector<int>& arr, int n, int k)
{
    int s = 0, e = n-1;
    int mid = s + (e - s)/2;

    while(s < e){
        // finding pivot
        if(arr[mid] >= arr[0])
            s = mid+1;
        else
            e = mid;

        mid = s + (e-s)/2;
    }

    if(k >= arr[s] && k <= arr[n-1])
        return binarySearch(arr, k, s, n-1, k);
    else
        return binarySearch(arr, k, 0, s-1, k);

}
