class Solution {
public:
    string reorganizeString(string s) {
        priority_queue<pair<int,char>>pq;
        vector<int>freq(26,0);
        for(int i=0;i<s.size();i++)freq[s[i]-'a']++;
        for(int i=0;i<26;i++){
            char c = i+'a';
            if(freq[i]!=0){
                pair<int,char>p = make_pair(freq[i],c);
                pq.push(p);
            }
        }
        string ans="";
        while(!pq.empty()){
            if(pq.size()>=2){
                pair<int,char>p1;
                pair<int,char>p2;
                p1=pq.top();
                pq.pop();
                p2 = pq.top();
                pq.pop();
                ans+=p1.second;
                ans+=p2.second;
                p1.first--;
                p2.first--;
                if(p1.first>0)pq.push(p1);
                if(p2.first>0)pq.push(p2);
            }
            else {
                if (pq.top().first > 1)return "";
                else{
                    ans+=pq.top().second;
                    pq.pop();
                }
            }
        }
        
        return ans;
        
        
        
        
    }
};