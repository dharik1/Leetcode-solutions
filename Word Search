class Solution {
    public boolean exist(char[][] board, String word) {
      
        for(int i=0;i<board.length;i++){
            for(int j=0;j<board[i].length;j++){
                if(isit(board,word,i,j,0)){
                    return true;
                }
            }
        }
        return false;
    }
     public boolean isit(char[][] board, String word, int i, int j, int index){
        if(index == word.length()){
            return true;
        }
        if(i >= board.length || i < 0 || j >= board[i].length || j < 0 || board[i][j] != word.charAt(index)){
            return false;
        }
        board[i][j]^=256;
        if(isit(board,word,i+1,j,index+1)||
          isit(board,word,i-1,j,index+1)||
          isit(board,word,i,j+1,index+1)||
          isit(board,word,i,j-1,index+1)){
            return true;
        }
       board[i][j]^=256;
        return false;
    }
}
