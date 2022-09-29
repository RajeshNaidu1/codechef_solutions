#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int count1=0;
	int count2=0;
	while(t--){
	    int a;
	        cin>>a;
	        if(a%2==0){
	            count1++;
	        }
	        else{
	            count2++;
	        }
	    }
	    if(count1>count2){
	        cout<<"READY FOR BATTLE";
	    }
	    else{
	        cout<<"NOT READY";
	    }
	return 0;
}
