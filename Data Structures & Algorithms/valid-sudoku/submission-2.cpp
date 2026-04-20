class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

      bool rows[9][9]= {false};  
      bool cols[9][9]= {false};
      bool squares[9][9]={false};


           //traversal part of algo ;  
        
        for(int i =0 ;  i<board.size();  i++){
            for(int j=0;  j<board.size() ;  j++){
               
                if(board[i][j]=='.')continue ;
                 int num = board[i][j] - '1';
                int k = (i / 3) * 3 + (j / 3);

                if(rows[i][num] || cols[j][num]|| squares[k][num]){
                    return false ;  
                }
              rows[i][num] = true ;  
              cols[j][num] =  true ; 
              squares[k][num] =  true ;  
         
            }
        }
        return true ;  
    }
          
};
