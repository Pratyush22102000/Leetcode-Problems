class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        if(digits[n-1]<9){
            digits[n-1] = digits[n-1] + 1;
            return digits;
        }else{
            int carry=1;
            int i=n-1;
            while(carry){
                digits[i]=0;
                if(i!=0&&digits[i-1]<9){
                    digits[i-1]+=1;
                    carry = 0;
                    return digits;
                }else if(i!=0&&digits[i-1]==9){
                    i--;
                }else {
                    digits.insert(digits.begin(),1);
                    carry=0;
                    return digits;
                }
            }
            
        }return digits;
    }
};
