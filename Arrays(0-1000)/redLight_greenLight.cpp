#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k,count=0;
	    cin>>n>>k;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    for(int i=0;i<n;i++){
	        if(arr[i]>k){
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
