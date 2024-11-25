//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

class Node {
  public:
    Node* prev;
    int data;
    Node* next;

    Node() {
        prev = NULL;
        data = 0;
        next = NULL;
    }

    Node(int value) {
        prev = NULL;
        data = value;
        next = NULL;
    }
};

void printList(Node* node) {
    Node* tmp = node;
    int c1 = 0, c2 = 0;
    if (tmp) {
        while (tmp->next != NULL) {
            c1++;
            tmp = tmp->next;
        }
        while (tmp->prev != NULL) {
            c2++;
            tmp = tmp->prev;
        }
        if (c1 != c2) {
            cout << "-1\n";
            return;
        }
    }
    while (tmp) {
        cout << tmp->data << ' ';
        tmp = tmp->next;
    }
    cout << endl;
}


// } Driver Code Ends
// User function Template for C++

/*
class Node{
public:
    Node* prev;
    int data;
    Node* next;

    Node()
    {
        prev = NULL;
        data = 0;
        next = NULL;
    }

    Node(int value)
    {
        prev = NULL;
        data = value;
        next = NULL;
    }
};*/

class Solution {
  public:
    Node* constructDLL(vector<int>& arr) {
        // code here
        Node* head = new Node(arr[0]);
        Node* temp = head;
        int  n = arr.size();
      for(int i=1;i<n;i++){
          Node* newnode = new Node(arr[i]);
          
           temp->next = newnode;
            newnode->prev = temp;
            temp = newnode;
          
      }
      return head;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution obj;
        Node* ans = obj.constructDLL(arr);
        printList(ans);

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends