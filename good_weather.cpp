#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a[7],count0=0,count1=0;
	    for(int i=0;i<7;i++){
	        cin>>a[i];
	    }
	    for(int i=0;i<7;i++){
	        if(a[i]==1){
	            count1++;
	        }
	        else{
	            count0++;
	        }
	    }
	    if(count1>count0){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}