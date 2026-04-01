/*
 * @lc app=leetcode id=622 lang=cpp
 *
 * [622] Design Circular Queue
 */

// @lc code=start
class MyCircularQueue {
public:

    vector<int> arr;
    int front,rear;
    int count,k;

    MyCircularQueue(int k) {
        this->k = k;
        arr.resize(k);
        front = 0;
        rear = -1;
        count = 0;    
    }
    
    bool enQueue(int value) {
        if(isFull()) return false;

        rear = (rear + 1) % k;
        arr[rear] = value;
        count++;
        return true;
    }

    bool deQueue() {
        if(isEmpty()) return false;

        front = (front+1) % k;
        count--;
        return true;
    }
    
    int Front() {
        if(isEmpty()) return -1;
        return arr[front];
    }
    
    int Rear() {
        if(isEmpty()) return -1;
        return arr[rear];
        
    }
    
    bool isEmpty() {
        return count == 0;
    }
    
    bool isFull() {
        return count == k;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int para*m_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */
// @lc code=end

