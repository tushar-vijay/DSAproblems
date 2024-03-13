int removeDuplicates(int* nums, int numsSize) {
    int i = 0, j = 1;
    int count = 0;

    while(j < numsSize){
        if(nums[i] == nums[j]){
            j++;
            continue;
        }
            
        if(nums[i] != nums[j]){
            nums[i+1] = nums[j];
            count++;
            i++;
            j++;
        }
    }

    return count+1;
}
