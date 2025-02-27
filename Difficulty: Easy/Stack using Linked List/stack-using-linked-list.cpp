//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct StackNode {
    int data;
    StackNode *next;

    StackNode(int a) {
        data = a;
        next = NULL;
    }
};


// } Driver Code Ends

class MyStack {
  private:
    StackNode *top;

  public:
    void push(int x) {
        // code here
        StackNode* newNode = new StackNode(x);
        newNode->next = top;
        top = newNode;
    }

    int pop() {
        // code here
        if(top==NULL) return -1;
        int val = top->data;
        top = top->next;
        return val;
    }

    MyStack() { top = NULL; }
};



//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    cin.ignore();
    while (T--) {
        MyStack *sq = new MyStack();
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        int n = nums.size();
        int i = 0;
        while (i < n) {
            int QueryType = nums[i++];
            if (QueryType == 1) {
                int a = nums[i++];
                sq->push(a);
            } else if (QueryType == 2) {
                cout << sq->pop() << " ";
            }
        }
        cout << endl;
        cout << "~"
             << "\n";
        delete sq;
    }
}

// } Driver Code Ends