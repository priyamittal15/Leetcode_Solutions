class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       Map<Integer, Integer> map = new HashMap<>();
        
        for(int i : nums){
            map.put(i, map.getOrDefault(i, 0) + 1);
        }
        
        PriorityQueue<Integer> maxHeap = new PriorityQueue<>((a,b) -> map.get(b) - map.get(a));
        
        for(int key : map.keySet()){
            maxHeap.add(key);
        }
        
        int res[] = new int[k];
        for(int i = 0; i < k; i++){
            res[i] = maxHeap.poll();
        }
        return res;
    }
};
