class MyStack {
    queue<int>q,q1;
public:
    MyStack() {
    }
    
    void push(int x) {
        q.push(x);
    }
    
    int pop() {
        int i=0;
        while(i<q.size()-1){
            q1.push(q.front());
            q.pop();
        }
        int x=q.front();
        q.pop();
        while(!q1.empty()){
            q.push(q1.front());
            q1.pop();
        }
        return x;
    }
    
    int top() {
        return q.back();
    }
    
    bool empty() {
        if(q.empty()){
            return true;
        }
        return false;
    }
};