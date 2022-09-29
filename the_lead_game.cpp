#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,x,y;
	cin>>n;
	int diff,winner;
	int max=0,p1=0,p2=0;
	while(n>0){
	    int x,y,leader;
	    cin>>x>>y;
	    p1=p1+x;
	    p2=p2+y;
	    if(p1>p2){
	        diff=p1-p2;
	        leader =1;
	    }
	    else{
	        diff=p2-p1;
	        leader=2;
	    }
	    if(diff>max){
	        max=diff;
	        winner=leader;
	    }
	    n--;
	}
	cout<<winner<<" "<<max;
	
	return 0;
}