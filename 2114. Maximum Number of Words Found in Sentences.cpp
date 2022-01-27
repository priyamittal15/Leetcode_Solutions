class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n=sentences.size();
        int counter, ans=0;
        for(int i=0;i<n;i++)
        {
            int k=sentences[i].length();
            counter=1;
            for(int j=0;j<k;j++)
            {
                if(sentences[i][j]==' ')
                {
                    counter++;
                }
            }
            ans=max(counter, ans);
        }
        return ans;
    }
};
