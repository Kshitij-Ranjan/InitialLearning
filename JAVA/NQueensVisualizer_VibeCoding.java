package JAVA;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.List;
import java.util.ArrayList;

public class NQueensVisualizer_VibeCoding extends JPanel {
    private List<List<String>> allSolutions;
    private int currentIndex = 0;
    private int n;
    private final int tileSize = 80;
    private JLabel solutionLabel; // to display solution number

    public NQueensVisualizer_VibeCoding(List<List<String>> solutions, int n, JLabel solutionLabel) {
        this.allSolutions = solutions;
        this.n = n;
        this.solutionLabel = solutionLabel;
        updateLabel();
        setPreferredSize(new Dimension(tileSize * n, tileSize * n));
    }

    @Override
    protected void paintComponent(Graphics g) {
        super.paintComponent(g);

        List<String> board = allSolutions.get(currentIndex);

        for (int row = 0; row < n; row++) {
            for (int col = 0; col < n; col++) {
                if ((row + col) % 2 == 0) {
                    g.setColor(Color.WHITE);
                } else {
                    g.setColor(Color.GRAY);
                }
                g.fillRect(col * tileSize, row * tileSize, tileSize, tileSize);

                if (board.get(row).charAt(col) == 'Q') {
                    g.setColor(Color.RED);
                    g.fillOval(col * tileSize + 20, row * tileSize + 20, tileSize - 40, tileSize - 40);
                }
            }
        }
    }

    public void nextSolution() {
        currentIndex = (currentIndex + 1) % allSolutions.size();
        updateLabel();
        repaint();
    }

    public void previousSolution() {
        currentIndex = (currentIndex - 1 + allSolutions.size()) % allSolutions.size();
        updateLabel();
        repaint();
    }

    private void updateLabel() {
        solutionLabel.setText("Solution " + (currentIndex + 1) + " / " + allSolutions.size());
    }

    // --- Your existing backtracking methods ---
    public static List<List<String>> solveNQueens(int n) {
        List<List<String>> allboards = new ArrayList<>();
        char[][] board = new char[n][n];

        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                board[i][j] = '.';

        helper(board, allboards, 0);
        return allboards;
    }

    public static boolean isSafe(int row, int col, char[][] board) {
        for (int i = 0; i < col; i++)
            if (board[row][i] == 'Q')
                return false;

        for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
            if (board[i][j] == 'Q')
                return false;

        for (int i = row, j = col; i < board.length && j >= 0; i++, j--)
            if (board[i][j] == 'Q')
                return false;

        return true;
    }

    public static void helper(char[][] board, List<List<String>> allboards, int col) {
        if (col == board.length) {
            List<String> newBoard = new ArrayList<>();
            for (int i = 0; i < board.length; i++) {
                newBoard.add(new String(board[i]));
            }
            allboards.add(newBoard);
            return;
        }

        for (int i = 0; i < board.length; i++) {
            if (isSafe(i, col, board)) {
                board[i][col] = 'Q';
                helper(board, allboards, col + 1);
                board[i][col] = '.';
            }
        }
    }

    public static void main(String[] args) {
        int n = 8;
        List<List<String>> solutions = solveNQueens(n);

        if (!solutions.isEmpty()) {
            JFrame frame = new JFrame("N-Queens Visualizer");
            frame.setLayout(new BorderLayout());

            JLabel solutionLabel = new JLabel("", SwingConstants.CENTER);
            solutionLabel.setFont(new Font("Arial", Font.BOLD, 20));
            frame.add(solutionLabel, BorderLayout.NORTH);

            NQueensVisualizer_VibeCoding visualizer = new NQueensVisualizer_VibeCoding(solutions, n, solutionLabel);

            JButton nextButton = new JButton("Next");
            JButton prevButton = new JButton("Previous");

            nextButton.addActionListener(new ActionListener() {
                @Override
                public void actionPerformed(ActionEvent e) {
                    visualizer.nextSolution();
                }
            });

            prevButton.addActionListener(new ActionListener() {
                @Override
                public void actionPerformed(ActionEvent e) {
                    visualizer.previousSolution();
                }
            });

            JPanel buttonPanel = new JPanel();
            buttonPanel.add(prevButton);
            buttonPanel.add(nextButton);

            frame.add(visualizer, BorderLayout.CENTER);
            frame.add(buttonPanel, BorderLayout.SOUTH);

            frame.pack();
            frame.setLocationRelativeTo(null);
            frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
            frame.setVisible(true);
        } else {
            System.out.println("No solutions found.");
        }
    }
}

