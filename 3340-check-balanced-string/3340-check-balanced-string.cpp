class Solution {
public:
    bool isBalanced(string nums) {
        bool is_equal=false;
        int sum_odd=0;
        int sum_even=0;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                sum_even+=(nums[i]-'0');
            }
            else{
                sum_odd+=(nums[i]-'0');
            }
        }
        if(sum_even==sum_odd){
             is_equal=true;
        }
        return is_equal;
    }
};