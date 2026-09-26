class Solution {
public:
    int minElement(vector<int>& nums) {
        int sum=0;
        int digit;
        int count;
        vector<int> v;
        for(int i=0;i<nums.size();i++){
        while(nums[i]!=0){
            digit=nums[i]%10;
            sum+=digit;
            nums[i]=nums[i]/10;
           
            }
             v.push_back(sum);
            sum=0;
        }
        count=*min_element(v.begin(),v.end());
        return count;
        
    }
};