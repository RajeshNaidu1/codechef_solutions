#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,x,k;
	    cin>>n>>x>>k;
	    int z=k/x;
	    if(z>=n){
	        cout<<n<<endl;   
	    }
	    else{
	        cout<<z<<endl;   
	    }
    }
	return 0;
}