#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,a;
	    int count=0;
	    cin>>n;
	    for(int i=0;i<n;i++){
	        cin>>a;
	        if(a>=10&&a<=60){
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
