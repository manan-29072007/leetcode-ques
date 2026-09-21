class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());
        nums.clear();
        for(auto x:s){
            nums.push_back(x);
        }
        sort(nums.begin(),nums.end());
        // for(int i=0;i<nums.size();i++){
        //     for(j=0;j<nums.size();j++){
        //         if(nums[i]==nums[j]){

        //         }
        //     }
        // }
      return nums.size();
    }
};