class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int dig;
        int count=0;
        for(int i=0;i<nums.size();i++){
            while(nums[i]>0){
                dig=nums[i]%10;
                if(dig==digit){
                    count++;
                }
                nums[i]=nums[i]/10;

            }
        }
        return count;
    }
};