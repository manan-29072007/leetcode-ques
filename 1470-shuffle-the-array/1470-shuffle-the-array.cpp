class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>shuffled;
        int k=nums.size();
        for(int i=0;i<nums.size();i++){
            if(i%2!=0){
                shuffled.push_back(nums[k/2+(i-1)/2]);
            }
            else{
                shuffled.push_back(nums[i/2]);
            }
        }
        return shuffled;
    }
};