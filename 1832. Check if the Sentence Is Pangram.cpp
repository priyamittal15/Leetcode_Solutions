class Solution {
public:
    bool checkIfPangram(string sentence) {
         int cnt[26] = {} ;
        for(auto &x : sentence) ++ cnt[x-'a'] ;
        for(int i = 0 ; i < 26 ; ++i) if(cnt[i] < 1) return false ;
        return true ;
    }
};
