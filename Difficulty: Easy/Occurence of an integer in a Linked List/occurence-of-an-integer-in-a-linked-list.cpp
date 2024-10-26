//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};


// } Driver Code Ends
/*
  Node is defined as
struct node
{
    int data;
    struct node* next;

    node(int x){
        data = x;
        next = NULL;
    }
}*head;
*/
class Solution {
  public:
    int count(struct Node* head, int key) {
        // add your code here
        Node* t = head;
        int c = 0;
        
     while(t!=NULL){
         if(t->data == key){
             c++;
         }
        t = t->next;
     }
        return c;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        struct Node *head = new Node(arr[0]);
        struct Node *tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            tail->next = new Node(arr[i]);
            tail = tail->next;
        }
        int key;
        cin >> key;
        cin.ignore();
        Solution ob;
        cout << ob.count(head, key) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends