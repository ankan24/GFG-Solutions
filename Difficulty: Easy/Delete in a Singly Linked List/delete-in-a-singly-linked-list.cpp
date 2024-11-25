//{ Driver Code Starts
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

/* Link list Node */
struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void print(Node* root) {
    Node* temp = root;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}


// } Driver Code Ends
/* Link list Node
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    /* Function to delete a node from a linked list */
    Node* deleteNode(Node* head, int x) {
        // cdoe here
          Node* temp = head;
        if(head == NULL) return NULL;
        if(x==1){
            head = head->next;
            return head;
        }
        for(int i=1;i<x-1;i++){
            temp = temp->next;
        }
        // while(temp->next != NULL){
        //     if(temp->data == x){
        //         temp->next = temp->next->next;
        //         delete temp->data;
        //     }
            temp->next = temp->next->next;
       // }
        return head;
    }
};


//{ Driver Code Starts.

/* Driver program to test above function */
int main() {
    int T;
    cin >> T;
    cin.ignore(); // Clear newline character after T input

    while (T--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        if (arr.empty()) {
            cout << -1 << endl;
            continue;
        }

        int data = arr[0];
        Node* head = new Node(data);
        Node* tail = head;

        for (int i = 1; i < arr.size(); ++i) {
            data = arr[i];
            tail->next = new Node(data);
            tail = tail->next;
        }

        int k;
        cin >> k;
        cin.ignore(); // Clear newline character after k input

        Solution ob;
        Node* result = ob.deleteNode(head, k);
        print(result);
        cout << endl;

        // Clean up memory to prevent memory leaks
        while (result != NULL) {
            Node* temp = result;
            result = result->next;
            delete temp;
        }
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends