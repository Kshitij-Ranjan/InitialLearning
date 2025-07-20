package JAVA;

import java.util.Scanner;

public class SudokuSolver {

    public static boolean isPresent(int row, int col, int currInt, int[][] board) {
        for (int i = 0; i < 9; i++) {
            if (board[row][i] == currInt || board[i][col] == currInt) {
                return true;
            }
        }
        int startRow = row - row % 3;
        int startCol = col - col % 3;
        for (int i = startRow; i < startRow + 3; i++) {
            for (int j = startCol; j < startCol + 3; j++) {
                if (board[i][j] == currInt) {
                    return true;
                }
            }
        }
        return false;
    }

    public static boolean sudokuSolver(int[][] board) {
        for (int row = 0; row < 9; row++) {
            for (int col = 0; col < 9; col++) {
                if (board[row][col] == 0) {
                    int currInt;
                    for (currInt = 1; currInt <= 9; currInt++) {
                        if (!isPresent(row, col, currInt, board)) {
                            board[row][col] = currInt;
                            if (sudokuSolver(board)) {
                                return true;
                            }
                            board[row][col] = 0;
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }

    public static void printSudoku(int[][] board) {
        System.out.println("\nSolved Sudoku:\n");
        for (int i = 0; i < 9; i++) {
            if (i % 3 == 0 && i != 0) {
                System.out.println("------+-------+------");
            }
            for (int j = 0; j < 9; j++) {
                if (j % 3 == 0 && j != 0) {
                    System.out.print("| ");
                }
                System.out.print(board[i][j] + " ");
            }
            System.out.println();
        }
    }

    public static void sudokuQuestion(int[][] board) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter your Sudoku puzzle row by row (use 0 for blanks):");
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                board[i][j] = sc.nextInt();
            }
        }
    }

    public static void main(String[] args) {
        int[][] board = new int[9][9];
        sudokuQuestion(board);
        if (sudokuSolver(board)) {
            printSudoku(board);
        } else {
            System.out.println("\nNo solution exists for the provided Sudoku puzzle.");
        }
    }
}
