vector<int> getSecondOrderElements(int n, vector<int> arr) {

  int largest = -1;
  int secondLargest = -1;
  int smallest = 99999;
  int secondSmallest = 99999;

    for(int i=0; i<n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }

        if(arr[i] < smallest){
            smallest = arr[i];
        }
    }

    for(int i=0; i<n; i++){

        if(arr[i] > secondLargest && arr[i] < largest)
            secondLargest = arr[i];
        
        if(arr[i] < secondSmallest && arr[i] > smallest)
            secondSmallest = arr[i];
    }

    return {secondLargest, secondSmallest};

}
