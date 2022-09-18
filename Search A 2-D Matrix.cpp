 bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        
        
        
        
        
        for(int i=0;i<matrix.size();i++){
            int left = 0, right = matrix[i].size()-1 ;
            while(left<=right){
                int mid = left + (right-left)/2;
                if(matrix[i][mid]==target){
                    return true;
                }else{
                    if(matrix[i][mid]<target) left = mid + 1 ;
                    if(matrix[i][mid]>target) right = mid - 1 ;
                }
            }
        }
        
        return false;
        
        
    }
