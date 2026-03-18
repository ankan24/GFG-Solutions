class Solution {
    private int moves;

    public int distCandy(Node root) {
        moves = 0;
        dfs(root);
        return moves;
    }

    private int dfs(Node node) {
        if (node == null) return 0;

        // Recursively compute balances for left and right subtrees
        int leftBalance = dfs(node.left);
        int rightBalance = dfs(node.right);

        // Each imbalance requires moves equal to its absolute value
        moves += Math.abs(leftBalance) + Math.abs(rightBalance);

        // Current node's balance = candies - 1 + left + right
        return (node.data - 1) + leftBalance + rightBalance;
    }
}