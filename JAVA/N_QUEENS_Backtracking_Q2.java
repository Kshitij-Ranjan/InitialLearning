package JAVA;

import java.util.ArrayList;
import java.util.List;

public class N_QUEENS_Backtracking_Q2 {

    public static boolean isSafe(int row,int col,char[][] board){
        //horizontal
        for(int i = 0 ; i<board.length ; i++){
            if(board[row][i] == 'Q'){
                return false;
            }
        }

        //verticle
        for(int i = 0 ; i<board.length ; i++){
            if(board[i][col] == 'Q'){
                return false;
            }
        }

        //upper left
        int r = row;
        for(int c = col ; c>=0 && r>= 0 ; c--, r-- ){
            if(board[c][r] == 'Q'){
                return false;
            }
        }
        // upper right
        r = row;
        for(int c = col; c<board.length && r>=0 ; c++, r--){
            if(board[c][r] == 'Q'){
                return false;
            }
        }

        //lower left
        r = row;
        for(int c = col; r<board.length && c>=0 ; c--, r++){
            if(board[c][r] == 'Q'){
                return false;
            }
        }

        //lower right
        r = row;
        for(int c = col; r<board.length && c<board.length ; c++, r++){
            if(board[c][r] == 'Q'){
                return false;
            }
        }
        return true;
    }

    public static void saveBoard(char[][] board, List<List<String>> allboards){
        String row = "";
        List<String> newBoard = new ArrayList<>();

        for(int i = 0 ; i < board.length ; i++){
            row = "";
            for(int j = 0; j < board.length ; j++){
                if(board[i][j] == 'Q'){
                    row += 'Q';
                } else {
                    row += '.';
                }
            }
            newBoard.add(row);
        }
        allboards.add(newBoard);
    }

    public static void helper(char[][] board, List<List<String>> allboards, int col){
        if(col == board.length){
            saveBoard(board,allboards);
            return;
        }

        for(int row = 0 ; row< board.length; row++){
            if(isSafe( row , col , board)){
                board[row][col] = 'Q';
                helper(board, allboards, col+1);
                board[row][col] = '.'; // to replace queen when we backtrack
            }
        }
    }
    public static List<List<String>> solveNQueens(int n){
        List<List<String>> allboards = new ArrayList<>();
        char[][] board = new char[n][n];
        helper(board, allboards , 0);
        return allboards;
    }
    public static void main(String[] args) {
        int n = 4;
        List<List<String>> Answer = solveNQueens(n);

        int count = 1;
        for(List<String> board : Answer) {
            System.out.println("Solution #" + count + ":");
            for(String row : board) {
                System.out.println(row);
            }
            System.out.println(); // empty line between boards
            count++;
        }
    }
}
