class Solution {
public:
    vector<int> stableMountains(vector<int>& height, int threshold) {
        vector<int> stable;
        for(int i=1;i<height.size();i++){
            if(threshold<height[i-1]){
                stable.push_back(i);
            }

        }
        return stable;

    }
};