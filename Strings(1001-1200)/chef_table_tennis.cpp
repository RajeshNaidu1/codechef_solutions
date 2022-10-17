#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s;
	    int count1=0,count2=0;
	    cin>>s;
	    for(int i=0;i<s.length();i++){
	        if(s[i]=='0'){
	            count1++;
	        }
	        else{
	            count2++;
	        }
	    }
	    if(count1>count2){
	        cout<<"LOSE"<<endl;
	    }
	    else if(count1<count2){
	        cout<<"WIN"<<endl;
	    }
	}
	return 0;
}
