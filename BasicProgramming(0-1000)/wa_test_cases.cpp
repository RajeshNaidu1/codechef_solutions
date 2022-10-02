#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    string v;
	    int arr[n];
	    cin>>n;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    cin>>v;
	    int m=INT_MAX;
	    for(int i=0;i<v.size();i++){
	        if(v[i]=='0'){
	            m=min(m,arr[i]);
	        }
	    }
	    cout<<m<<endl;
	}
	return 0;
}
