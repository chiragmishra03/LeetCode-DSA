class Solution {
    public int reverse(int x) {
        int neg=1;
        if(x<0)
        {
            neg=-1;
            x=-x;
        }

        long s=0;
        while(x!=0)
        {
            int r=x%10;
            s=s*10+r;
        if(s> Integer.MAX_VALUE || s<Integer.MIN_VALUE)
        return 0;
            
            x/=10;
        }
        
        

        if(neg==-1)
        s=-s;
        return (int)s;
        
    }
}