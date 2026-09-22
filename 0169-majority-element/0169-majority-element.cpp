class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // int max=nums[0];
        // for(int i=0;i<nums.size();i++){
        //     if(max<nums[i]){
        //         max=nums[i];
        //     }
        // }
        // vector<int> count(max+1,0);
        // for(int i=0;i<nums.size();i++){
        //     count[nums[i]]++;
        // }
        // int max_count=count[0];
        // int index;
        // for(int i=0;i<count.size();i++){
        //     if(max_count<count[i]){
        //         max_count=count[i];
        //         index=i;

        //     }
        // }
        // return index;
        unordered_map<int,int> majority;
        for(int x:nums){
            majority[x]++;
        }
        int major = 0;
int ans;

for(auto x : majority){
    if(x.second > major){
        major = x.second;
        ans = x.first;
    }
}

return ans;
    }
};