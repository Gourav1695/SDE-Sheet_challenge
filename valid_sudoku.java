class Solution {
    public boolean IsSafe(char[][] board, int row, int col, char num){

        for(int i = col+1; i < 9; i++){         //for row checking
            if(board[row][i] == num)
                return false;
        }

        for(int i = row+1; i < 9; i++){         //For col checking
            if(board[i][col] == num)
                return false;
        }

        int x = row - row%3, y = col-col%3;        //for internal square
        for(int i = x; i < x+3; i++){
            for(int j = y; j < y+3; j++){
                if(board[i][j] == num && !(i == row && j == col))
                    return false;
            }
        }   
        return true;
    } 
    public boolean isValidSudoku(char[][] board) {

        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                if(board[i][j] != '.'){
                    if(!IsSafe(board, i, j, board[i][j]))
                        return false;
                }
            }
        }
        return true;
    }
}
