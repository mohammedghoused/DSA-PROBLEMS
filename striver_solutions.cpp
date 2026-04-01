#include <iostream>
#include <vector>
using namespace std;

string simplifyPath(string path) {
    string newpath = "/";
    for(int i=1;i<path.length();i++){
        
        if(path[i] == '/' ){
            continue;
        }

        if(path[i] == '//' || path[i] == '///') newpath+='/';
        
        newpath += path[i];
    }
    return newpath;

}

int main(){
    string path = "/home//foo/";

    string n = simplifyPath(path);

    for(char ch: n){
        cout<<ch;
    }
}


for(int i=0;i<n;i++){
    for(int j=i;j< 2*i + j -1;j++){
        if(root[i] == null) continue;
        res.push_back(root[i]);
    }
}


vector<int> res;
for(int i=1;i<n;i++){
    int po = i*i;
    if(po > n) break;
    res.push_back(po);
}
check_multiple(int n,vector<int> &res){
    for(int i=0;i<n;i++){
        if(res[i] == n) return 1;

        
        while(i<res.size()){
            int power = res.size();
            for(int j=power;j>0;j--)
            {
                int ans = pow(res[i],j);
                if(ans == n) return j;
                power--;
            } 
            i++;
        }
    }
    return 0;

}
check_multiple(n);

for(int i to n)
{
    for(j  i to n){
        if(res[i]+res[j] == n)
return 2    }
}













class Solution {
public:
    int numSquares(int n) {

        // calculating squares till n
        vector<int> squares;
        for(int i = 1; i*i <= n; i++)
            squares.push_back(i*i);

        //BFS TO HANDLE TLE 
        queue<int> q;
        vector<bool> visited(n + 1, false);
        q.push(n);
        visited[n] = true;

        //
        int level = 0;

        while(!q.empty()) {
            int sz = q.size();
            level++;

            while(sz--) {
                int curr = q.front(); q.pop();
                for(int sq : squares) {
                    int next = curr - sq;
                    if(next < 0) break;
                    if(next == 0) return level;

                    if(!visited[next]) {
                        visited[next] = true;
                        q.push(next);
                    }
                }
            }
        }
        return level;
    }
};
