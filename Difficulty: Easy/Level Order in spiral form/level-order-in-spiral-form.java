/*
class Node
{
    int data;
    Node left, right;

    Node(int item)
    {
        data = item;
        left = right = null;
    }
}
*/
class Solution {
    public ArrayList<Integer> findSpiral(Node root) {
        // code here
        ArrayList<Integer> result = new ArrayList<>();

        if (root == null) {
            return result;
        }

        // Two stacks for nodes at even and odd levels
        Stack<Node> evenLevelStack = new Stack<>();
        Stack<Node> oddLevelStack = new Stack<>();

        // Add the root node to the stack for even levels (level 0)
        evenLevelStack.push(root);

        while (!evenLevelStack.isEmpty() || !oddLevelStack.isEmpty()) {
            while (!evenLevelStack.isEmpty()) {
                Node current = evenLevelStack.pop();
                result.add(current.data);

                // Add the right and left children of the current node to the stack for odd levels
                if (current.right != null) {
                    oddLevelStack.push(current.right);
                }
                if (current.left != null) {
                    oddLevelStack.push(current.left);
                }
            }

            while (!oddLevelStack.isEmpty()) {
                Node current = oddLevelStack.pop();
                result.add(current.data);

                // Add the left and right children of the current node to the stack for even levels
                if (current.left != null) {
                    evenLevelStack.push(current.left);
                }
                if (current.right != null) {
                    evenLevelStack.push(current.right);
                }
            }
        }

        return result;
        
        
    }
}