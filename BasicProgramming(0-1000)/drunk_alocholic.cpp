#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int k,even,odd,steps;
	    cin>>k;
	    if(k%2==0){
	        even=k/2;
	        odd=(k/2)*3;
	        steps=odd-even;
	    }
	    else{
	        odd=((k+1)/2)*3;
	        even=k-((k+1)/2);
	        steps=odd-even;
	    }
	    cout<<steps<<endl;
	}
	return 0;
}
