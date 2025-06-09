/*
class Node {
        int data;
        Node left, right;

        Node(int item) {
            data = item;
            left = right = null;
        }
}*/

class Solution {
     public static boolean isDeadEnd(Node root)
    {
        //Add your code here.
       return helper(root, 1, Integer.MAX_VALUE);
    }
    
    static boolean helper(Node root,int min, int max){
        if(root == null){
            return false;
        }
        if(min==max){
            return true;
        }
        boolean left = helper(root.left,min,root.data-1);
        boolean right = helper(root.right,root.data+1,max);
        
        return left||right||(root.data==min && root.data==max);
    }
}