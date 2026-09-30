class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> largest;
        if(nums.size()==1){return nums[0];}
        int element;
        int count=0;
        for(auto x:nums){
            largest.push(x);
        }
        
        while(count!=k-1&&k>1){
            largest.pop();
            element=largest.top();
            count++;
        }
        if(k==1){
            element=*max_element(nums.begin(),nums.end());
        }
        return element;
        


       
        

    }
};