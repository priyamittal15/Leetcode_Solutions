class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        int n=encoded.size();
          vector<int> res = {first};
        for (int i=0;i<n;i++)
            res.push_back(first ^= encoded[i]);
        return res;
        
    }
};
