class MyQueue {
public:
    stack<int>queu;
    stack<int>helper;
    MyQueue() {}
    void push(int x) 
    {
        queu.push(x);
    }
    int pop() {
        while(!queu.empty()){
            int num = queu.top();
            queu.pop();
            helper.push(num);
        }
        int answer = helper.top();
        helper.pop();
        while(!helper.empty()){
            int num = helper.top();
            helper.pop();
            queu.push(num);
        }
        return answer;
    }
    
    int peek() {
        while(!queu.empty()){
            int num = queu.top();
            queu.pop();
            helper.push(num);
        }
        int answer = helper.top();
        while(!helper.empty()){
            int num = helper.top();
            helper.pop();
            queu.push(num);
        }
        return answer;
    }
    
    bool empty() {
        if(queu.size()==0)return true;
        return false;
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