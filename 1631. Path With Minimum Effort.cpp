class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
         int L = 0;
        int R = INT_MAX;
        int best = INT_MAX;
        while(L <= R) {
            int M = L + (R-L) / 2;
            
            if(isValid(heights, M)) {
                R = M - 1;
                best = min(best, M);
            } else {
                L = M + 1;
            }
        }
        
        return best;
    }
};
