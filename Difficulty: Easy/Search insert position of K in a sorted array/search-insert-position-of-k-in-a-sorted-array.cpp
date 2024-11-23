//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int searchInsertK(vector<int>Arr, int N, int k)
    {
        // code here
    int l = 0;
    int r = Arr.size()-1;
    
    while(l<=r){
        int m = l+(r-l)/2;
        if(Arr[m] == k){
            return m;
        }
        if(Arr[m] > k){
            r = m-1;
        }
        else{
            l =m+1;
        }
    }
    return l;
    }
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        vector<int>Arr(N);
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int k;
        cin>>k;
        Solution obj;
        cout<<obj.searchInsertK(Arr, N, k)<<endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends