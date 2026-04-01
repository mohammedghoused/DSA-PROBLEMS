/*
 * @lc app=leetcode id=3394 lang=cpp
 *
 * [3394] Check if Grid can be Cut into Sections
 */

// @lc code=start
class Solution {
public:
    int mergeforXaxis(vector<vector<int>>rectxaxis){
        int start = rectxaxis[0][0];
        int end = rectxaxis[0][1];
        int no_of_merges = 1;
        for(int i=1;i<rectxaxis.size();i++){
            if(rectxaxis[i][0] < end){
                start = min(start,rectxaxis[i][0]);
                end = max(end,rectxaxis[i][1]);
            }
            else {
                no_of_merges++;
                start = rectxaxis[i][0];
                end = rectxaxis[i][1];
            }
        }
        return no_of_merges;
    }
    int mergeforYaxis(vector<vector<int>>rectyaxis){
        int start = rectyaxis[0][0];
        int end = rectyaxis[0][1];
        int no_of_merges = 1;
        for(int i=1;i<rectyaxis.size();i++){
            if( rectyaxis[i][0] < end) {
                end = max(end,rectyaxis[i][1]);
                start = min(start,rectyaxis[i][0]);
            }
            else {
                no_of_merges++;
                start = rectyaxis[i][0];
                end = rectyaxis[i][1];
            }
        }
        return no_of_merges;
    }
    bool checkValidCuts(int n, vector<vector<int>>& rectangles) {
        
        vector<vector<int>> rectxaxis;
        vector<vector<int>> rectyaxis;
        
        for(auto &cord : rectangles){
            int x1 = cord[0];
            int y1 = cord[1];
            int x2 = cord[2];
            int y2 = cord[3];

            rectxaxis.push_back({x1,x2});
            rectyaxis.push_back({y1,y2});
        }
        sort(rectxaxis.begin(), rectxaxis.end());
        sort(rectyaxis.begin(), rectyaxis.end());
        
        int vc = mergeforXaxis(rectxaxis) - 1;
        int hc = mergeforYaxis(rectyaxis) - 1;

        return (vc >=2 || hc>=2)?true:false;

    }
};
// @lc code=end

