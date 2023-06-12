class Solution {
public:
    
    
    int help(vector<int>& nums,int i,int x){
        
        if(i==nums.size()){
            return x;
        }
        
        
        //NOT TAKE
        
       int not_take =  help(nums,i+1,x);
        
        //TAKE 
        x = x^nums[i];
       int take =  help(nums,i+1,x);
        x = x^nums[i];
        
        
        return not_take+take;
    }
    
    
    
    
    
    int subsetXORSum(vector<int>& nums) {
        
        return help(nums,0,0);
    }
};