//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
};

void printInorder(Node *node) {
    if (node == NULL) {
        return;
    }
    printInorder(node->left);
    cout << node->data << " ";
    printInorder(node->right);
}

Node *buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current Node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


// } Driver Code Ends
/*

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/
class Solution {
  public:
    void check(queue<Node*> q,vector<int> &ans,int lev){
        if(q.empty()) return;
        int size = q.size();
        for(int i=0;i<size;i++){
            Node* f = q.front();
            q.pop();
            if(lev%2 != 0) ans.push_back(f->data);
            if(f->left) q.push(f->left);
            if(f->right) q.push(f->right); 
        }
        lev++;
        check(q,ans,lev);
    }
  
    vector<int> nodesAtOddLevels(Node *root) {
        // code here
        queue<Node*> q;
        q.push(root);
        vector<int> ans;
        if(root==NULL) return ans;
        check(q,ans,1);
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d", &t);
    cin.ignore();
    while (t--) {
        string treeString;
        getline(cin, treeString);
        Node *root = buildTree(treeString);
        Solution obj;
        vector<int> v;
        v = obj.nodesAtOddLevels(root);

        sort(v.begin(), v.end());
        for (auto it : v) {
            cout << it << " ";
        }
        cout << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends