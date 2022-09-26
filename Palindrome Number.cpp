class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        long int ans = 0;
        int temp= x;
        int remainder;
        while(x!=0)
        {
            remainder= x%10 ;
            x = x/10;
            ans=ans*10+remainder;
        }
        if(temp==ans) return true;       
        else return false;
            
        
    }
};
