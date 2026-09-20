class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sum_even=0;
        int sum_odd=0;
        for(int i=1;i<=2*n;i++){
            if(i%2==0){
                sum_even=i+sum_even;
            }
            else{
                sum_odd+=i;
            }
        }
        return sum_even-sum_odd;
        
    }
};