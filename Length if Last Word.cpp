class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
        int r = s.length()-1;
        while(1)
        {
            char a = s[r];
            if(r==0&&a!=' ') return count+1;
            if(a==' '&&count!=0) return count;
            else if(a!=' '){
                count++;
                r--;
            }else if(a==' '&&count==0) r--;
            }
           
        
        return 0; 
    }
};
