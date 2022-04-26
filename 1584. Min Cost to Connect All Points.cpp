class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
         vector<vector<pair<int,int>>> adj;
        for(int i=0;i<points.size();i++){
            vector<pair<int,int>> temp;
            for(int j=0;j<points.size();j++){
                if(j==i) continue;
                pair<int,int> p;
                int dist;
                dist=abs(points[j][0]-points[i][0])+abs(points[j][1]-points[i][1]);
                p={j,dist};
                temp.push_back(p);
            }
            adj.push_back(temp);
        }
        
        //MINIMUM SPANNING TREE
        int V=points.size();
        int INF = 1e9;
        vector<int> key(V,INF);
        vector<bool> mstSet(V,false);
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        pq.push({0,0});
        key[0] = 0;
        
        while(!pq.empty()){
            int u = pq.top().second;
            pq.pop();
            mstSet[u] = true;
            for(auto ele : adj[u]){
                int v = ele.first;
                int w = ele.second;
                if(mstSet[v] == false && w < key[v]){
                    
                    key[v] = w;
                    pq.push({w,v});
                }
            }
        }
        long long sum = 0;
        for(int x : key){
            sum+=x;
        }
        return sum;
    }
};
