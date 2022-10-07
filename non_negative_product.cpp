#include <iostream>
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
	        if(arr[i]<0){
	            count++;
	        }
	        else if(arr[i]==0){
	           count=0;
	           break;
	        }
	    }
	    if(count%2==0){
	        cout<<"0"<<endl;
	    }
	    else{
	        cout<<"1"<<endl;
	    }
	}
	return 0;
}
