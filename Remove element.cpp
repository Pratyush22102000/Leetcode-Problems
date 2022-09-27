class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
        int l=0,r=nums.size()-1,count=0;
        while(r>l){
            if(nums[l]!=val){
                l++;
                continue;
            }
            else if(nums[l]==val&&nums[r]!=val) {
                
                swap(nums[r],nums[l]);
                l++;
                r--;
                
            }
            else if(nums[r]==val) r--;
             
        }
        for(int i =0;i<nums.size();i++)
        {
            if(nums[i]==val) break;
            count++;
        }
        return count;
    }
};//nums.size()-
