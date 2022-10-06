#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    string d;
	    cin>>n;
	    cin>>d;
	    bool flag=false;
	    for(int i=0;i<n;i++){
	        if(d[i]=='5'||d[i]=='0'){
	            flag=true;
	            break;
	        }
	    }
	    if(flag==true){
	        cout<<"Yes"<<endl;
	    }
	    else{
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}
