#include <iostream>
#include <vector>
using namespace std;
#include <stack>
void deleteMid(stack<int> &s , int k){

    

    if(k==1) {
        s.pop();
        return;
    }

    int top = s.top();
    s.pop();
    deleteMid(s,k-1);

    s.push(top);
}

int main(){
     stack<int> s;

    s.push(5);
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);

    int k = s.size();
   
    
    deleteMid(s,k/2+1);

    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
}