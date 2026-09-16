class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extracandies) {   vector<bool> result;
         bool most_candies=false;
        int sum=0;
        int max_candies=candies[0];
        for(int i=0;i<candies.size();i++){
            if(max_candies<candies[i]){
                max_candies=candies[i];
            }
        }
        for(int i=0;i<candies.size();i++){
            sum=candies[i]+extracandies;
                if(sum>=max_candies){
                    most_candies=true;
            
                }
                else{
                    most_candies=false;
                    }
                result.push_back(most_candies);
                
            sum=0;

        }
        return result;
    }
};