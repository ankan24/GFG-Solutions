//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

struct Node {
    int data;
    Node *right;
    Node *left;

    Node(int x) {
        data = x;
        right = NULL;
        left = NULL;
    }
};


// } Driver Code Ends
// Function to search a node in BST.
class Solution{

public:
    void findFloor(Node* root,int x,vector<int>& arr){
        if(root==NULL){
            return;
        }
        
        if(root->left) findFloor(root->left,x,arr);
        arr.push_back(root->data);
        if(root->right) findFloor(root->right,x,arr);
    }

    int floor(Node* root, int x) {
        // Code here
        vector<int> arr;
        findFloor(root,x,arr);
        int ans = -1;
        
        for(int i=arr.size()-1;i>=0;i--){
            if(arr[i] <= x){
                ans = arr[i];
                break;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

Node *insert(Node *tree, int val) {
    Node *temp = NULL;
    if (tree == NULL) return new Node(val);

    if (val < tree->data) {
        tree->left = insert(tree->left, val);
    } else if (val > tree->data) {
        tree->right = insert(tree->right, val);
    }

    return tree;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        Node *root = NULL;

        int N;
        cin >> N;
        for (int i = 0; i < N; i++) {
            int k;
            cin >> k;
            root = insert(root, k);
        }

        int s;
        cin >> s;
        Solution obj;
        cout << obj.floor(root, s) << "\n";
    
cout << "~" << "\n";
}
}

// } Driver Code Ends