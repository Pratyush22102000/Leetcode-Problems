bool canConstruct(string ransomNote, string magazine) {
        
        ios_base::sync_with_stdio(false);
        //cin.tie(NULL);
        //cout.tie(NULL);
        vector<int> rfreq(26,0);
        
        vector<int> mfreq(26,0);
        int mini = min(ransomNote.size(),magazine.size());
        
        for(int i=0;i<ransomNote.size();i++){
            rfreq[ransomNote[i]-'a']++;
        }
        for(int i=0;i<magazine.size();i++){
            mfreq[magazine[i]-'a']++;
        }
         for(int i=0 ; i<26 ; i++){
             if(rfreq[i]>mfreq[i]) return false;
         }
        return true;
    }
