#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k,total,noAffect,affect;
	    cin>>n>>k;
	    total=(n+4)/5;
	    noAffect=(k+4)/5;
	    affect=total-noAffect;
	    cout<<affect<<endl;
	}
	return 0;
}
