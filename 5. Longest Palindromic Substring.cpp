class Solution {
public:
    string longestPalindrome(string s) {
         int n=s.size(),maxLen=1,start=0;
        int dp[n][n];
        int i,k;
        memset(dp,0,sizeof(dp));
        
//         String of length =1 
        for(i=0;i<n;i++){
            dp[i][i]=1;
        }
        //string of length 2
        for(i=0;i<n;i++){
            if(s[i]==s[i+1]){
                dp[i][i+1]=1;
                start=i;
                maxLen=2;                
                    
        }
    }
        
        //for string of length 3 and more
        
            for(k=3;k<=n;k++){
                for(i=0;i<n-k+1;i++){
                    int j=i+k-1;
                if(s[i]==s[j] && dp[i+1][j-1])
                {
                    dp[i][j]=1;
                    if(k>maxLen)
                    {
                        start=i;
                        maxLen=max(maxLen,k);
                    }
                 }
               
               
            }
        
    }
        
             return s.substr(start,maxLen);
}
};
