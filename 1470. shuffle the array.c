class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int X=0;
        for(int i=1; i<=operations.size();i++){
            if(operations[i]=="--X" or operations[i]=="X--"){
                X--;
            }
            else if(operations[i]=="++X" or  operations[i]== "X++" ){
                X++;
            }



        }
        return X;
    }
};
