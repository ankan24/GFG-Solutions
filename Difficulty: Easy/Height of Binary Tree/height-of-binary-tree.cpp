/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    int height(Node* node) {
        // code here
        if(!node) return -1;
        
        int lh = height(node->left);
        int rh = height(node->right);
        int mx = max(lh,rh);
        return mx+1;
    }
};