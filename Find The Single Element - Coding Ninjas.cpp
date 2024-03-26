#include<vector>

int getSingleElement(vector<int> &arr){
	int i = 0;
	int n = arr.size();

	while(i < n){
		if(arr[i] == arr[i+1]){
			i += 2;
		}else{
			return arr[i];
		}
	}	
}
