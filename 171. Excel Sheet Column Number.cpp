class Solution {
public:
    int titleToNumber(string columnTitle) {
        int result = 0;
    for (int i = 0; i < columnTitle.size(); result = result * 26 + (columnTitle.at(i) - 'A' + 1), i++);
    return result;
        
    }
};
