class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int count;
        int max=nums[0];
        int min=nums[1];
        if(nums.size()==1){return -1;}
        for(int i=0;i<nums.size();i++){
           if(max<nums[i]){
            max=nums[i];
           }
           else if(min>nums[i]){
                min=nums[i];
            }
        }
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=max&&nums[i]!=min){
                 count=nums[i];
            }
           else if(nums.size()==2){
            count=-1;
           }
           
        }
       return count;
    }
};