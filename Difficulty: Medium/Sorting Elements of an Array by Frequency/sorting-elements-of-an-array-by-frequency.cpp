#include <iostream>
#include <bits/stdc++.h>
using namespace std;


bool comp(pair<int,int>x , pair<int,int> y){
    if(x.second==y.second){
        return x.first < y. first;
    }
    return x.second > y.second;
}

int main() {
	//code
	int t;
	cin>> t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> arr(n);
	    map<int,int> mp;
	    
	    for(int i=0;i<n;i++){
	        cin>> arr[i];
	         mp[arr[i]]++;
	    }
	    
	    vector<pair<int,int>> v;
	    
	    for(auto ele : mp){
	        v.push_back({ele.first,ele.second});
	    }
	    sort(v.begin(),v.end(),comp);
	    
	    for(auto i : v){
	        int x = i.first;
	        int f = i.second;
	        while(f--){
	            cout<<x<<" ";
	        }
	    }
	  
	  cout<<endl;
	    
	}
	return 0;
}