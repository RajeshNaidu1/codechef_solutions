#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int l,r,count=0;
	    cin>>l>>r;
	    while(l<=r){
	        if(l%10==2||l%10==3||l%10==9){
	            count++;
	           // cout<<i<<endl;
	        }
	        l++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
