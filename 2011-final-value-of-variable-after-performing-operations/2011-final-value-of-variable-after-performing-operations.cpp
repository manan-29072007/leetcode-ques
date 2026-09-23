class Solution {
public:
    int finalValueAfterOperations(vector<string>& oper) {
        int X=0;
        for(int i=0;i<oper.size();i++){
           if(oper[i]=="--X"||oper[i]=="X--"){
            X--;
           }
           if(oper[i]=="++X"||oper[i]=="X++"){
            X++;
           }
        }
        return X;
    }
};