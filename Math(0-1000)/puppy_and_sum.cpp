#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int d,n,sum=0;
	    cin>>d>>n;
	    int temp=n;
	    for(int j=0;j<d;j++){
	        for(int i=1;i<=temp;i++){
	            sum=sum+i;
	        }
	        temp=sum;
	        sum=0;
	    }
	    cout<<temp<<endl;
	}
	return 0;
}
