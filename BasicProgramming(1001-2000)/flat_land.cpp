#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,i=0;
	    cin>>a;
	    while(true){
	        int s;
	        s=sqrt(a);
	        a=a-s*s;
	        i++;
	        if(a==0){
	            break;
	        }
	    }
	    cout<<i<<endl;
	}
	return 0;
}
