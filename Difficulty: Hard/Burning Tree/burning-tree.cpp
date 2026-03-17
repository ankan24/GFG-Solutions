class Solution {
  public:
    int minTime(Node* root, int target) {
        // code here
        unordered_map<Node*, Node*>mpp;
        Node*start;
        queue<Node*>q;
        q.push(root);
        while(q.size()){
            int size = q.size();
            while(size--){
                auto elem = q.front();
                q.pop();
                if(elem->data == target){
                    start = elem;
                }
                if(elem->left){
                    mpp[elem->left] = elem;
                    q.push(elem->left);
                }
                if(elem->right){
                    mpp[elem->right] = elem;
                    q.push(elem->right);
                }
            }
        }
        q.push(start);
        int cnt = -1;
        unordered_set<int>st;
        st.insert(target);
        while(q.size()){
            cnt++;
            int size = q.size();
            while(size--){
                auto elem = q.front();
                q.pop();
                if(elem->left && st.find(elem->left->data) == st.end()){
                    st.insert(elem->left->data);
                    q.push(elem->left);
                }
                if(elem->right && st.find(elem->right->data) == st.end()){
                    st.insert(elem->right->data);
                    q.push(elem->right);
                }
                if(mpp.find(elem)!=mpp.end() && st.find(mpp[elem]->data) == st.end()){
                    st.insert(mpp[elem]->data);
                    q.push(mpp[elem]);
                }
            }
        }
        return cnt;
    }
};