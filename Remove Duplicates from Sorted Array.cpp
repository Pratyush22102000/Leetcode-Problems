class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]!=nums[i+1]) count++;
        }
        
        int l=0,r=1;
        while(r<nums.size()){
            if(nums[l]==nums[r]) r++;
            else{
                
                swap(nums[l+1],nums[r]);
                l++;
                r++;
                
            }
            
        }

        return count;
    }
};
