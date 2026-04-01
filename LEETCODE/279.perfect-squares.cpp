/*
 * @lc app=leetcode id=279 lang=cpp
 *
 * [279] Perfect Squares
 */

// @lc code=start
class Solution {
public:
    int numSquares(int n) {
        // calculate squares
        vector<int> squares;
        for(int i=1;i*i<=n;i++){
            squares.push_back(i*i);
        }

        //handling tle with BFS
        queue<int> q;
        q.push(n);
        vector<bool>visited(n+1,false);
        visited[n] = true;

        //finding min square using level logic
        int level = 0;

        while(!q.empty()){
            level++;
            int size = q.size();

            while(size--){
                int curr = q.front();q.pop();
                for(int sq:squares){
                    int next = curr- sq;

                    if(next == 0)return level;
                    if(next<0)break;

                    if(!visited[next]){
                        visited[next] = true;
                        q.push(next);
                    }
                }
            }
        }
        return level;
    }
};
// @lc code=end

