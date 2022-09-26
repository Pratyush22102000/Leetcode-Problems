class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        
        int mincount=1000,count=0;
        
        
        string dummy = strs[0];
        
        
        
        for(int i=1;i<strs.size();i++){
            string temp = strs[i];
            
           
            
            for(int j=0;j<temp.length();j++){
                
                if(temp[j]==dummy[j]){
                  
                    count++;
                    
                }
                
                else
                  
                {
                    break;
                }
            }
          
            mincount=min(mincount,count);
            count = 0 ;
        }
        return dummy.substr(0,mincount);
    }
};
