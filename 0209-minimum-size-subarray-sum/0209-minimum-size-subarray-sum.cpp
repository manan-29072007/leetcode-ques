class Solution {
public:

    int minSubArrayLen(int target, vector<int>& nums) {
        int sum = 0;
        int size = INT_MAX;
        int index = 0;
      for(int i = 0;i < nums.size();i++){
            sum += nums[i];
            while(i >= index && sum >= target){
                sum -= nums[index];
                size = min(size,i - index + 1);
                index++;
            }
        }
        if(sum < target && index == 0) return 0;
        return size;
    }
};
    