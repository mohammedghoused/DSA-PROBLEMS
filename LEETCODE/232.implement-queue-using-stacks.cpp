/*
 * @lc app=leetcode id=232 lang=cpp
 *
 * [232] Implement Queue using Stacks
 */

// @lc code=start
class MyQueue {
public:

    stack<int> front;
    stack<int> rear;
    MyQueue() {}
    
    void push(int x) {
        rear.push(x);
    }
    int pop() {
        if(front.empty()){
            while(!rear.empty()){
                front.push(rear.top());
                rear.pop();
            }
         }
        int x = front.top();
        front.pop();
        return x;
    }
    int peek() {
        if(front.empty()){
            while(!rear.empty()){
                front.push(rear.top());
                rear.pop();
            }
        }
        return front.top();
    }
    bool empty() {
        return front.empty() && rear.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
// @lc code=end

