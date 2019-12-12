int searchInsert(int* nums, int numsSize, int target){
    int index = 0;
        
    for(int i = 0; i < numsSize; i++){
        if(target > nums[i]){
            index = i + 1;
            continue;
        }
        if(target == nums[i]){
            index = i;
            continue;
        }
    }    
    return index;
}
