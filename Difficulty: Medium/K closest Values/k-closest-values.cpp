/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    void inorder(Node* r,vector<int> &a){
        if(!r) return;
        if(r->left) inorder(r->left,a);
        a.push_back(r->data);
        if(r->right) inorder(r->right,a);
    }
  
    vector<int> getKClosest(Node* root, int target, int k) {
        // code here
        vector<int> in;
        inorder(root,in);
    
    vector<pair<int,int>> diff;
    for(int i=0;i<in.size();i++){
        diff.push_back({abs(in[i]-target),in[i]});
    }
    sort(diff.begin(),diff.end());
    vector<int> ans;
    int i=k;
    while(k--){
        ans.push_back(diff[k].second);
    }
    return ans;
        
    }
};