#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,count=0;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    for(int i=0;i<n;i++){
	        for(int j=i+1;j<n;j++){
	            if(arr[i]==arr[j]&&arr[j]!=0){
	                count++;
	                arr[j]=0;
	            }
	        }
	    }
	    cout<<n-count<<endl;
	}
	return 0;
}
