#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int d1,d2,x1,y1,x2,y2;
	    cin>>x1>>y1>>x2>>y2;
	    if(x1>x2){
	        d1=x1-x2;	    
	    }
	    else{
	        d1=x2-x1;
	    }
	    if(y1>y2){
	        d2=y1-y2;
	    }
	    else{
	        d2=y2-y1;
	    }
	    if(d1>d2){
	        cout<<d1<<endl;
	    }
	    else{
	        cout<<d2<<endl;
	    }
    }
	return 0;
