class Solution {
public:
     bool isSubstring(string a, string b){
        int i=0, j=0;
        int k=a.size();
        while(j< b.size()){
            if(a[i]==b[j]){
                if(b.substr(j,k)==a) return 1;
            }
            j++;
        }
        
        return 0;
    }
    
    
    int numOfStrings(vector<string>& patterns, string word) {
        int count=0;
        for(int i=0;i<patterns.size();i++){
             if(isSubstring(patterns[i], word)) 
                 count++;
            }
        
        
        return count;
    }
};
