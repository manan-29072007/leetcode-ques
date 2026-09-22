class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==val){
        //         nums.erase(nums.begin()+i);
        //         nums[i+1]=nums[i];
        //     }
            
        
        // }
        // return nums.size();
        int left=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                nums[left]=nums[i];
                left++;
            }
        }
        return left;

        
        
        
    }
};