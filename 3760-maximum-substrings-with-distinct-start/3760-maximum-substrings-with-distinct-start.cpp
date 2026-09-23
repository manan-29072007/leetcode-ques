class Solution {
public:
    int maxDistinct(string s) {
        unordered_map<char,int> alphabets;
        for(char x:s){
            alphabets[x]++;
        }
        int max=0;
        for(auto x:alphabets){
            if(x.second>=1){
                max++;
            }
        }
        return max;
        
    }
};