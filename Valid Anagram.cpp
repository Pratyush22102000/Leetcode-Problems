bool isAnagram(string s, string t) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        vector<int> sfreq(26,0);
        vector<int> tfreq(26,0);
        if(s.size()==t.size()){
        for(int i = 0; i < s.size() ; i++){
            sfreq[s[i]-'a']++;
            tfreq[t[i]-'a']++;
        }
            
        }else{
            return false; 
        }
        for(int i=0;i<26;i++){
            if(sfreq[i]!=tfreq[i]){
                return false;
            }
        }return true;
    }
