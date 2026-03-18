/* Tree node structure  used in the program

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};*/

class NodeValue{
    public: 
    int maxNode, minNode, maxSize ;
    
    NodeValue(int minNode, int maxNode, int maxSize)
    {
        this->maxNode = maxNode ;
        this->minNode = minNode ;
        this->maxSize = maxSize ;
    }
};

class Solution {
  public:
    /*You are required to complete this method */
    // Return the size of the largest sub-tree which is also a BST
    
    // T.C. = O(n)
    // S.C. = O(h)
    
    NodeValue solve(Node* root)
    {
        // An empty tree is a BST of size 0
        if(!root) return NodeValue(INT_MAX, INT_MIN, 0) ;
        
        // Get values from left and right subtree of current tree
        auto left = solve(root->left) ;
        auto right = solve(root->right) ;
        
        // Current node is greater than max in left and smaller than min in right, it is a BST
        if(left.maxNode < root->data && root->data < right.minNode)
        {
            return NodeValue(min(root->data, left.minNode), max(root->data, right.maxNode), left.maxSize + right.maxSize + 1) ;
        }
        
        // Otherwise return [-inf, inf] so that parent can't be a valid BST
        return NodeValue(INT_MIN, INT_MAX, max(left.maxSize, right.maxSize)) ;
    }
    
    int largestBst(Node *root) {
        return solve(root).maxSize ;
    }
};