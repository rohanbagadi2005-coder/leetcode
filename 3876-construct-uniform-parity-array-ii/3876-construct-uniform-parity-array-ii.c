bool uniformArray(int* nums1, int nums1Size) {
    int minOdd = INT_MAX;

    for(int i = 0; i< nums1Size; i++){
        if(nums1[i] % 2)
            minOdd = nums1[i] < minOdd ? nums1[i] : minOdd;
    }

    if(minOdd == INT_MAX)
        return true;

    for(int i = 0; i < nums1Size; i++ ){
        if(nums1[i] % 2 == 0 && nums1[i] < minOdd)
            return false;
    }
    return true;
}