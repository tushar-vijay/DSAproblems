#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	
	sort(arr.begin(), arr.end());

	vector<vector<int>> ans;

	for(int i=0; i<n; i++){

		if(i==0 || arr[i] != arr[i-1]){
			int L = i+1, R = n-1;

			while(L < R){
				int sum = arr[i] + arr[L] + arr[R];

				if(sum == K){
					vector<int> temp = {arr[i], arr[L], arr[R]};
					ans.push_back(temp);

					while(L < R && arr[L] == arr[L+1])
						L++;

					while(L < R && arr[R] == arr[R-1])
						R--;

					L++;
					R--;
				}
				else if(sum < K)
					L++;
				else
					R--;
			}
		}
	}
	
	return ans;
}
