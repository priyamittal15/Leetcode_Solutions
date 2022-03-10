class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
     int result=0;

        for(int i=0;i<items.size();i++){

            if(ruleKey == "type" and ruleValue == items[i][0]){
                result++;
            }
            else if(ruleKey == "color" and ruleValue == items[i][1]){
                result++;
            }
            else if(ruleKey == "name" and ruleValue == items[i][2]){
                result++;
            }

        }
        return result;
    }
};
