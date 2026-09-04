int firstStableIndex(int* nums, int numsSize, int k) {
    for( int i = 0; i < numsSize; i++){
        int Max = nums[0], Min = nums[i];
    for(int j = 0; j <= i; j++){
        if(nums[j] > Max)
            Max = nums[j];
    }
    for(int j = i;j < numsSize; j++){
        if(nums[j] < Min)
            Min = nums[j];
    }
        if(Max - Min <= k)
            return  i;
    }   
    return -1;
}