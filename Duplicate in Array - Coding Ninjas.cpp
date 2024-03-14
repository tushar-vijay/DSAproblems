int findDuplicate(vector<int> &arr) 
{
    
    int ans = 0;
    int n = arr.size();

    for(int i=0; i<n; i++)
        ans ^= arr[i];

    for(int i=1; i<=n-1; i++)
        ans ^= i;

    return ans;
	
}
