int searchInsert(vector<int>& arr, int m)
{
	int n = arr.size();
	if(n == 0) return 0;
	
	if(arr[0] > m) return 0;

	if(arr[n-1] < m) return n;

	int s = 0, e = n-1, mid = s + (e - s)/2;

	while(s <= e){

		if(arr[mid] == m) 
			return mid;
		
		else if(arr[mid] < m && arr[mid+1] > m)
			return mid + 1;
		
		else if(arr[mid] > m && arr[mid-1] < m)
			return mid;
		
		else if(arr[mid] < m)
			s = mid + 1;
		
		else
			e = mid - 1;

		mid = s + (e - s)/2;
	}

	return -1;
}
