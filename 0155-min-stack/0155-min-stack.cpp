class MinStack {
public:
    stack<pair<int,int>> s;
    MinStack() {
         
    }
    
          int getMin(){
           if(s.empty()) return -1;
           return s.top().second;
           
       }
       void pop(){
           s.pop();
       }
      
    int top(){
        return s.top().first;
    }
       
       void push(int x){
           if(s.empty()) s.push({x,x});
           else s.push({x,min(s.top().second,x)});
           
       }
};