#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,count=0;
	    cin>>n;
	    if(n%5==0||n%10==0){
	        while(n%10!=0){
	            n=n*2;
	            count++;
	        }
	    }
	    else{
	        count=-1;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
