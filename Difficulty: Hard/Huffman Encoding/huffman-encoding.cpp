class Node {
    public:
    int data;
    Node* left;
    Node* right;
    
    Node(int d){
        data = d;
        left = NULL;
        right = NULL;
    }
};

class cmp{
    public:
    bool operator()(Node* a, Node* b){
        return a->data > b->data;
    }
};

class Solution {
  public:
     void preorder(Node* root , vector<string> &ans , string t){
         if(root->left==NULL && root->right==NULL){
         ans.push_back(t);
         return;
         }
         preorder(root->left , ans , t+"0");
         preorder(root->right , ans, t+"1");
     }
   
    vector<string> huffmanCodes(string S, vector<int> f, int N) {
        // Code here
        priority_queue<Node* ,vector<Node*>, cmp> pq;
        
        for(int i=0;i<N;i++){
            Node* t = new Node(f[i]);
            pq.push(t);
        }
        
        while(pq.size() > 1){
            Node* l = pq.top();
            pq.pop();
            Node* r = pq.top();
            pq.pop();
            
            Node* newNode = new Node(l->data + r->data);
            newNode->left = l;
            newNode->right = r;
            pq.push(newNode);
        }
        Node* root = pq.top();
        string t = "";
        vector<string> ans;
        preorder(root,ans,t);
        
        return ans;
    }
};