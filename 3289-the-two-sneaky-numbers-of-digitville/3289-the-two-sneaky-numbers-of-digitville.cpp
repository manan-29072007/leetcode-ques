class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        int count_twice=0;
        vector<int> sneaky;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    count_twice++;
                    if(count_twice==2&&find(sneaky.begin(),sneaky.end(),nums[i])==sneaky.end()){
                        sneaky.push_back(nums[i]);
                    }
                
                }
            }
            count_twice=0;
        }
        sort(sneaky.begin(),sneaky.end());
        return sneaky;
    }
};