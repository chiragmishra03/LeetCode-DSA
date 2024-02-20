class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        priority_queue<pair<int,char>>pq;
        string ans="";
        pair<int,char>p1=make_pair(a,'a');
        pair<int,char>p2=make_pair(b,'b');
        pair<int,char>p3=make_pair(c,'c');
        if(a!=0)
        pq.push(p1);
        if(b!=0)
        pq.push(p2);
        if(c!=0)
        pq.push(p3);
        while(pq.size()>1){
            if(pq.size()>1){
                pair<int,char>p1;
                pair<int,char>p2;
                p1 = pq.top();
                pq.pop();
                p2=pq.top();
                pq.pop();
                if(p1.first>=2){
                    ans+=p1.second;
                    ans+=p1.second;
                    p1.first = p1.first-2;
                }else{
                    ans+=p1.second;
                    p1.first = p1.first-1;
                }
                if(p2.first>=2 and p2.first>=p1.first){
                    ans+=p2.second;
                    ans+=p2.second;
                    p2.first = p2.first-2;
                }else{
                    ans+=p2.second;
                    p2.first = p2.first-1;
                }
                if(p1.first>0)pq.push(p1);
                if(p2.first>0)pq.push(p2);
            }  
        }
       if(pq.size()==1){
            pair<int,char>p1;
            p1 = pq.top();
            if(p1.first>=2){
                    ans+=p1.second;
                    ans+=p1.second;
                    p1.first = p1.first-2;
                }else{
                    ans+=p1.second;
                    p1.first = p1.first-1;
                }
       }
        return ans;
    }
};