/*
 * @lc app=leetcode id=347 lang=cpp
 *
 * [347] Top K Frequent Elements
 */

// @lc code=start
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> hmap;
        vector<int> res;
    
        //creates hashmap and stores ele and freq
        for(auto it:nums) hmap[it]++;

        //Defining min heap
        typedef pair<int,int> P;
        priority_queue<P,vector<P>,greater<P>> pq; //min heap

        //push ele and maintain size == k

        for(auto &it: hmap){
            int value = it.first;
            int freq = it.second;

            pq.push({freq,value});

            if(pq.size() > k ){
                pq.pop();
            }
        }

        // storing in res
        while(!pq.empty()){
            res.push_back(pq.top().second);
            pq.pop();
        }

        return res;

    }
};
// @lc code=end

