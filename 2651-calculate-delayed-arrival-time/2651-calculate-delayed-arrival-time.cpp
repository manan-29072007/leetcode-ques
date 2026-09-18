class Solution {
public:
    int findDelayedArrivalTime(int arrival, int delayed) {
        int count=0;
        if(arrival+delayed<24){
            count=arrival+delayed;
        }
        else{
            count=abs(24-(arrival+delayed));
        }
        return count;
    }
};