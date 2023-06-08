class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end());
        
        long long int ans = 0;
        
        int i=0;
        int j=skill.size()-1;
        
        long long int div = skill[i]+skill[j];
        while(i<j)
        {
            if(skill[i]+skill[j]!=div){
                ans = -1;
                break;
            }
            else{
                int m = skill[i]*skill[j];
                ans+=m;
            } 
            
            i++;
            j--;
        }
        
        return ans;
    }
};