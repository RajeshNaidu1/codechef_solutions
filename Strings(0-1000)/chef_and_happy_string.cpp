#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    bool flag=false;
	    int n,count=0;
	    n=s.length();
	    for(int i=0;i<n;i++){
	        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
	            count++;
	        }
	        else{
	            count=0;
	        }
	        if(count>2){
	            cout<<"Happy"<<endl;
	            flag=true;
	            break;
	        }
        }
	    if(!flag){
	        cout<<"Sad"<<endl;
	    }
	}
	return 0;
}
