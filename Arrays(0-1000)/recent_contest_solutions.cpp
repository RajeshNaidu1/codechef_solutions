#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,count1=0,count2=0;
	    cin>>n;
	    string arr;
	    for(int i=0;i<n;i++){
	        cin>>arr;
	        if(arr[0]=='S'){
	            count1++;
	        }
	        else{
	            count2++;
	        }
	    }
	    cout<<count1<<" "<<count2<<endl;
	}
	return 0;
}
