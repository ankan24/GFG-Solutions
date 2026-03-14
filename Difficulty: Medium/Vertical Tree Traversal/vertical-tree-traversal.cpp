 class Solution {
  public:
  
    void helper(Node* root,int level,map<int,vector<int>> &mp)
    {
       queue<pair<int,Node*>> q;
       q.push({0,root});
       
       while(!q.empty())
       {
           pair<int,Node*> nd = q.front();
           q.pop();
           mp[nd.first].push_back(nd.second->data);
           if(nd.second->left != nullptr)
           {
               q.push({nd.first-1,nd.second->left});
           }
           if(nd.second->right != nullptr)
           {
               q.push({nd.first+1,nd.second->right});
           }
       }
        
       
    }
    vector<vector<int>> verticalOrder(Node *root) {
        // code here
        map<int,vector<int>> mp;
        vector<vector<int>> ans;
        helper(root,0,mp);
        for(pair<int,vector<int>> p:  mp)
        {
            ans.push_back(p.second);
        }
        return ans;
        
        
    }
};