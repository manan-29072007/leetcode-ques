class Solution {
public:
    int busyStudent(vector<int>& start, vector<int>& end, int query) {
        int num_students=0;
       for(int i=0;i<start.size();i++){
        if(start[i]==end[i]&&query==start[i]||end[i]>=query&&start[i]<=query){
            num_students++;
        }
       

       }
       return num_students;
    }
};