class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int sum1=0;
        int sum2=0;
        vector<int> v1;
        vector<int> v2;
        vector<int> v3;
        for(int i=0;i<nums.size();i++){
                v1.push_back(sum1);
                sum1=nums[i]+sum1;
               }
               for(int i=nums.size()-1;i>=0;i--){
                   v2.push_back(sum2);
                   sum2=nums[i]+sum2;

               }
               reverse(v2.begin(),v2.end());
               for(int i=0;i<nums.size();i++){
                v3.push_back(abs(v2[i]-v1[i]));
               }
               return v3;
    }
};