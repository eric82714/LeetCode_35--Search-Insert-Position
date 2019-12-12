class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int index = 0;
        
        for(int i = 0; i < nums.size(); i++){
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
};
