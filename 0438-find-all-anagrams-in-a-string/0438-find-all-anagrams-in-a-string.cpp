class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>map(27,0);
        vector<int>check(27,0);
        vector<int>ans;
        
        for(int i=0;i<p.length();i++){
            char b = p[i];
            int m = b;
            m = m-97;
            map[m]++;
        }
        
        int i=0;
        int j =0;
        while(j<s.length()){
            char b = s[j];
            int m = b;
            m = m-97;
            check[m]++;
            
            if(j-i+1 == p.length()){
                if(map==check)
                {
                  ans.push_back(i);
                }
                check[s[i]-97]--;
                i++;
            }
            j++;
        }
        
        return ans;
    }
};