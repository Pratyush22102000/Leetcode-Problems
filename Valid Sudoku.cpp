bool isValidSudoku(vector<vector<char>>& board) {
        
       int count[9];
        
        for(int i=0;i<9;i++)// checking all the columns
        {
            memset(count,0,9*sizeof(int));
            for(int j=0;j<9;j++){
                if(board[i][j]!='.') count[board[i][j]-'1']++;
                
            }
        for(int k=0;k<9;k++){
            if(count[k]>1){
                return false;
            }
        }
            
        }
        for(int i=0;i<9;i++)// checking all the rows
        {
            memset(count,0,9*sizeof(int));
            for(int j=0;j<9;j++){
               if(board[j][i]!='.') count[board[j][i]-'1']++;
            }
        for(int k=0;k<9;k++){
            if(count[k]>1){
                return false;
            }
        }
            
        }
       
        int block_row = 0, block_col = 0;
   for (int block = 0; block < 9; block++){
      block_row = (block / 3) * 3, block_col = (block % 3) * 3;
      memset(count, 0, 9 * sizeof(int));
      for (int row = block_row; row < (block_row + 3); row++){
      for (int col = block_col; col < (block_col + 3); col++){
         if (board[row][col] != '.')
            count[board[row][col] - '1']++;
      }}
      
       for (int i = 0; i < 9; i++) if (count[i] > 1) return false;
            
         
   }
        return true;
    }
