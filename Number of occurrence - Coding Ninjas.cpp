int firstPos(vector<int>& arr, int n, int k){

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s <= e){
        if(arr[mid] == k){
            ans = mid;
            e = mid - 1;
        }
        else if(arr[mid] > k)
            e = mid - 1;
        else
            s = mid + 1;
        
        mid = s + (e-s)/2;
    }

    return ans;
}

int lastPos(vector<int>& arr, int n, int k){

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s <= e){
        if(arr[mid] == k){
            ans = mid;
            s = mid + 1;
        }
        else if(arr[mid] > k)
            e = mid - 1;
        else
            s = mid + 1;
        
        mid = s + (e-s)/2;
    }

    return ans;
}

int count(vector<int>& arr, int n, int x) {

	int last = lastPos(arr, n, x);

	if(last == -1) 
		return 0;

	return (lastPos(arr, n, x) - firstPos(arr, n, x) + 1);
}
