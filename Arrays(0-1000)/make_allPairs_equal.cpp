#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,count=1,k=0;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    sort(arr,arr+n);
	    for(int i=0;i<n-1;i++){
	        if(arr[i]==arr[i+1]){
	            count++;
	        }
	        else{
	            count=1;
	        }
	        k=max(count,k);   
	    }
	    cout<<n-k<<endl;
	}
	return 0;
}