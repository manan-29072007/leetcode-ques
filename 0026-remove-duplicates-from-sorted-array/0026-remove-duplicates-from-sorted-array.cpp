class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());
        nums.clear();
        for(auto x:s){
            nums.push_back(x);
        }
        sort(nums.begin(),nums.end());
      return nums.size();
    }
};