#include <iostream>
#include <vector>
using namespace std;
#include <stack>

void solve(int open,int close,string op){
   
   if(open==0 && close==0){
        cout<<"op"<<" ";
        return;
   }
    if(open<close) {
        op.push_back(')');
        close--;
        solve(open,close,op);
    }
    op.push_back('(');
    open--;


    solve(open,close,op);
   
    
   
    
    
}