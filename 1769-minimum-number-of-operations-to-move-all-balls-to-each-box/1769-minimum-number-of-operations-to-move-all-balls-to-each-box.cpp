class Solution {
public:
    vector<int> minOperations(string nums) {
        int sum=0;
        vector<int> v;
      for(int i=0;i<nums.size();i++){
        for(int j=0;j<nums.size();j++){
            if(nums[j]=='1'){
                sum+=abs(j-i);
                
            }

        }
         v.push_back(sum);
        sum=0;
      }
     
      return v;  
    }
};