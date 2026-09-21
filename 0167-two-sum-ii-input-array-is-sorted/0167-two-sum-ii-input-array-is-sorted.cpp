class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        int left=0;
        int right=nums.size() - 1;
        while(left<right){
           int current_sum=nums[left]+nums[right];
           if(current_sum==target){
            v.push_back(left+1);
            v.push_back(right+1);
            break;
           }
           else if(current_sum>target){
            right--;
           }
           else{
            left++;
           }
          
        }
        return v;
   
    }
};